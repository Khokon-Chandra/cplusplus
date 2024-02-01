#include<iostream>
#include<vector>
using namespace std;


vector<int> sortArray(vector<int> &nums)
{
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] > nums[j]){
                int max = nums[i];
                nums[i] = nums[j];
                nums[j] = max;
            }
        }
    }
    return nums;
}


int main()
{
    vector<int>nums={10,2,5,8,7,12};

    vector<int>sortedArray = sortArray(nums);

    for(int i=0; i<sortedArray.size(); i++){
        cout << sortedArray[i] << endl;
    }

    return 0;
}