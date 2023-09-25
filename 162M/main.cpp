#include<iostream>
#include<vector>

using namespace std;

int findPeakElement(vector<int>& nums) {
    int i = 0;
    int j = nums.size()-1;
    int res = 0;
    
    if(nums.size() == 1) return 0;
    if(nums[i] > nums[i+1]) return i;
    if(nums[j] > nums[j-1]) return j;

    while(i <= j){
        int mid = (i+j)/ 2;
        if(nums[mid] < nums[mid+1]){
            i = mid + 1;
        }else{
            j = mid - 1;
        }
    }
    return i;
}

int main(){
    vector<int> test = {1,2,1,3,5,6,4};
    int res = findPeakElement(test);
    cout << res << endl;
    return 0;
}