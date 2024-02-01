#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                   return result;
                }
                cout << "Inner line"<<endl;
            }
            cout << "Outer line" <<endl;
        }
        return result;
    }
};


int main()
{
    Solution object;

    vector<int>nums;
    vector<int>result;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(10);
    result = object.twoSum(nums,7);

    return 0;
}
