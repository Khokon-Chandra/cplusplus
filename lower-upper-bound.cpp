#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int result;

    vector<int> v{1, 2, 3, 6, 5};

    sort(v.begin(), v.end());

    vector<int>::iterator l1, l2;

    l1 = lower_bound(v.begin(), v.end(), 3);
    l2 = lower_bound(v.begin(), v.end(), 19);

    cout<< l2 - v.begin() <<endl;

    return 0;
}