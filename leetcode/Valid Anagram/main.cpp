#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize=s.size(),tSize=t.size();
        if(sSize!=tSize) return false;
        vector<int> sCount(26, 0),tCount(26, 0);
        for(int i=0; i<sSize; ++i){
            sCount[s[i]-'a']++;
            tCount[t[i]-'a']++;
        }
        for(int i=0; i<26; ++i){
            if(sCount[i] != tCount[i]) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s="anagram", t="nagaram";
    bool ans = sol.isAnagram(s,t);
    cout<<ans<<endl;
    return 0;
}
