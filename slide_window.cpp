
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Complete the given function
vector<int> solve(vector<int> &A, int B)
{
    vector<int>result;
    int max;

    for(int i=0; i<A.size()+1-B; i++){
        max = 0;
        for(int j=0; j<B; j++){
            if(A[i+j] > max){
                max = A[i+j];
            }
        }
        result.push_back(max);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int B;
        cin >> B;
        vector<int> ans = solve(A, B);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
