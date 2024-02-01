#include<iostream>
#include<vector>
using namespace std;


vector<int> sortArray(vector<int> &nums)
{
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size()-i-1; j++){
            if(nums[j] > nums[j+1]){
                int temp  = nums[j];
                nums[j]   = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    return nums;
}


int main()
{
    vector<int>nums={15,14,13,11,1,10,2,5,8,7,12};

    vector<int>sortedArray = sortArray(nums);

    for(int i=0; i<sortedArray.size(); i++){
        cout << sortedArray[i] << endl;
    }

    return 0;
}