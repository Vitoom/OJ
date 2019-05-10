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
        if(!head || !head->next) return head;
        ListNode *pre=head,*p=head;
        while(p->next&&p->next->next){
            pre = pre->next;
            p = p->next->next;
        }
        ListNode *second=pre->next;
        pre->next = NULL;
        return merge(sortList(head), sortList(second));
    }

    ListNode* merge(ListNode* l, ListNode* r){
        ListNode *p = new ListNode(0);
        ListNode *newhead = p;
        while(l || r)
            if(!r || l && l->val <= r->val){
                p->next = l;
                p = p->next;
                l = l->next;
            }
            else{
                p->next = r;
                p = p->next;
                r = r->next;
            }
        p = newhead->next;
        delete newhead;
        return p;
    }
};

int main() {
    vector<int> v = {4, 2, 1, 3};
    List list(v);
    cout<<list.head;
    Solution s;
    ListNode* ret = s.sortList(list.head);
    cout<<ret;
    return 0;
}