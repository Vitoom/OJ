#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct List {
    ListNode* head;

    List(const vector<int>& v){
        head = NULL;
        for(auto it=v.rbegin(); it!=v.rend(); ++it){
            ListNode *p = new ListNode(*it);
            p->next = head;
            head = p;
            cout<<*it<<endl;
        }
    }

    ~List() {
        ListNode *p = head;
        while (p) {
            head = head->next;
            delete p;
            p = head;
        }
    }
};

ostream& operator<<(ostream& out, ListNode* p){
    while(p){
        out<<p->val<<endl;
        p = p->next;
    }
    return out;
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        ListNode *newhead = new ListNode(0);
        newhead->next = head;
        ListNode *head1=head,*head2=head,*pre1=newhead,*pre2=newhead;
        int span=1,len=0;
        ListNode *tmp=head;
        while(tmp){
            ++len;
            tmp = tmp->next;
        }
        while(true) {
            head1 = head2 = newhead->next;
            pre1 = pre2 = newhead;
            do {
                int cnt = 0;
                while (head2 && cnt < span) {
                    pre2 = head2;
                    head2 = head2->next;
                    ++cnt;
                }
                cnt = 0;
                while (true) {
                    if (!head2 || cnt == span) {
                        while (head1 != head2) {
                            pre1 = head1;
                            head1 = head1->next;
                        }
                        break;
                    } else if (head1 == head2) {
                        while (head1 && cnt < span) {
                            pre1 = head1;
                            head1 = head1->next;
                            ++cnt;
                        }
                        head2 = head1;
                        break;
                    } else if (head1->val <= head2->val) {
                        pre1 = head1;
                        head1 = head1->next;
                    } else {
                        pre2->next = head2->next;
                        pre1->next = head2;
                        head2->next = head1;
                        pre1 = pre1->next;
                        head2 = pre2->next;
                        ++cnt;
                    }
                }
            } while (head1);
            span *= 2;
            if(span>len) break;
        }
        head1 = newhead->next;
        delete newhead;
        return head1;
    }
};

int main() {
    vector<int> v = {-1, 5, 3, 4, 0};
    List list(v);
    cout<<list.head;
    Solution s;
    ListNode* ret = s.sortList(list.head);
    cout<<ret;
    return 0;
}