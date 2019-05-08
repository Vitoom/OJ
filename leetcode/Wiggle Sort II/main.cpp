#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int size = nums.size();
        if(size<2) return;
        int mid = (size+1)/ 2;
        threeWayPartition(nums, 0, size-1, mid);
        for(int i=0; i<nums.size(); i++)
            cout<<nums[i]<<' ';
        cout<<endl;
        vector<int> tmp(nums);
        int less=mid-1,bigger=size-1;
        for(int i=0; i<size; ++i){
            nums[i] = (i+1)%2? tmp[less--]: tmp[bigger--];
        }
    }

    void swap(vector<int>&nums, int i, int j){
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }

    void threeWayPartition(vector<int>& nums, int begin, int end, int k){
        if(begin>=end) return; // important for border
        int pivot = nums[begin+(end-begin)/2];
        int scan = begin, left=begin, right=end;
        cout<<'a'<<endl;
        while(scan<=right){
            if(nums[scan] < pivot){
                swap(nums, scan, left);
                scan++;
                left++;
            }
            else if(nums[scan] > pivot){
                swap(nums, scan, right);
                right--;
            }
            else scan++;
        }
        if(k<=left) threeWayPartition(nums, begin, left, k);
        if(k>=scan) threeWayPartition(nums, scan, end, k);
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,5,5,6};
    s.wiggleSort(nums);
    for(int i=0; i<nums.size(); i++)
        cout<<nums[i]<<' ';
    cout<<endl;
    return 0;
}
