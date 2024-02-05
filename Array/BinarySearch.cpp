#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{

    vector<int>nums{1,3,8,5,6,4,2};

    sort(nums.begin(), nums.end());

    bool found = binary_search(nums.begin(), nums.end(), 5);

    vector<int>::iterator it = upper_bound(nums.begin(), nums.end(), 9);

    if(found) cout << "number is found" <<endl;

    else cout << "Number is not found" <<endl;

    cout << "Iterator is = " << *it <<endl;

    return 0;
}