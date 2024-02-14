#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int topIndex(vector<int> &arr)
    {
        int maxIndex = 0;
        int max = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            maxIndex = arr[i] > max ? i : maxIndex;
            max = arr[i] > max ? arr[i] : max;
        }
        return maxIndex;
    }

    bool validMountainArray(vector<int> &arr)
    {

        if (arr.size() < 3)
            return false;

        int top = topIndex(arr);

        if (arr[0] >= arr[top])
            return false;

        if (arr[arr.size() - 1] >= arr[top])
            return false;

        for (int i = 0; i < arr.size(); i++)
        {
            if (i < top)
            {
                if (arr[i] > arr[top] || arr[i] < arr[i - 1])
                    return false;
            }

            if (i > top && (arr[i] > arr[top] || arr[i] > arr[i - 1]))
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    vector<int> arr = {0,3,2,1};
    Solution obj;
    int result = obj.validMountainArray(arr);
    cout << result << endl;
    return 0;
}