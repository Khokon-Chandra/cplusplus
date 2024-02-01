#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

pair<int,int> findMaxMin(vector<int> &A){
    sort(A.begin(), A.end());
    return {A[0],A[A.size()-1]};
}

int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }    

    pair<int,int> min_max = findMaxMin(A);

    return 0;
}