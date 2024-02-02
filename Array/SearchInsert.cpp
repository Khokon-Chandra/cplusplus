#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    int targetElement;

    int search(vector<int> &nums, int left, int right)
    {

        int mid = (left + right) / 2;

        if (right < left)
            return left;

        if (nums[mid] == targetElement)
            return mid;

        if (nums[mid] > targetElement)
            return search(nums, left, mid - 1);

        return search(nums, mid + 1, right);
    }

    

public:
    int searchInsert(vector<int> &nums, int target)
    {
        int length = nums.size();
        int left = 0;
        int right = length - 1;
        targetElement = target;
       return search(nums, left, right);
    
    }
};


int main()
{
    vector<int>nums={1};
    int target = 0;
    Solution object;
    cout << object.searchInsert(nums, target) << endl;
    return 0;
}