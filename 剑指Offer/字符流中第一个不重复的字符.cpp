class Solution
{
public:
    Solution():count(1){}
  //Insert one char from stringstream
    void Insert(char ch){
        if(m[ch]) m[ch] = -1;
        else m[ch] = count++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce(){
        int minIdx=count;
        char ans = '#';
        for(auto a:m){
            if(a.second>0 && a.second<minIdx){
                minIdx = a.second;
                ans = a.first;
            }
        }
        return ans;
    }
    
private:
    unordered_map<char, int> m;
    int count;
};
