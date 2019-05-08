#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
    int pos;
    vector<char> op;
    map<char, int> priority;
    stack<char> ops;
    stack<long> nums;

public:
    Solution(): pos(0),
                op({'+','-','*','/'}),
                priority({{'#',3},{'+',2},{'-',2},{'*',1},{'/',1}}) {}

    int calculate(string s) {
        string e = get(s);
        if(!e.size()) return 0;
        ops.push('#');
        while(!ops.empty()){
            if(isdigit(e[0])){
                nums.push(atoi(e));
                e = get(s);
            }
            else if(ops.empty() || priority[e[0]]<priority[ops.top()]){
                ops.push(e[0]);
                e = get(s);
            }
            else{
                char c = ops.top(); ops.pop();
                if(c=='#') break;
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();
                long result;
                if(c=='+') result=a+b;
                else if(c=='-') result=a-b;
                else if(c=='*') result=a*b;
                else result=a/b;
                if(result<INT_MIN) return INT_MIN;
                if(result>INT_MAX) return INT_MAX;
                nums.push(result);
            }
        }
        return (int)nums.top();
    }

    string get(const string& s) {
        int begin=pos;
        int size_s = s.size();
        while(begin<size_s && s[begin]==' ') {begin++;};
        int end = begin;
        if(begin<size_s && find(op.begin(), op.end(), s[begin]) != op.end()){
            pos = begin+1;
            return s.substr(begin, 1);
        }
        while(end<size_s&&isdigit(s[end])) ++end;
        pos = end;
        if(begin==end) return "#";
        return s.substr(begin, end-begin);
    }

    long atoi(const string& s){
        long ans=0;
        for(auto i:s){
            ans = ans * 10 + i-'0';
        }
        return ans;
    }
};


int main() {
    Solution s;
    string str = " 3+5 / 2 ";
    cout<<s.calculate(str)<<endl;
    return 0;
}