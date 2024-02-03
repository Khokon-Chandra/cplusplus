#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n     = 5;
    int arr[n] = {1132,546,234,576,123};

    sort(arr, arr+n);

    cout << arr[n-1] <<endl;

    return 0;
}