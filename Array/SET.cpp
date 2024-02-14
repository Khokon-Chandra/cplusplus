#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<bool>seen(nums.size());
        vector<int>ans;

        for(auto c: nums){
            seen[c] = true;
        }

        for(int i=0; i< seen.size(); i++){
            cout << seen[i] <<endl;
        }

        return ans;
    }
};




int main()
{
    vector<int>nums{1,1};
    Solution s;
    s.findDisappearedNumbers(nums);

    return 0;
}