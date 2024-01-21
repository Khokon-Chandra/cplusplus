#include<iostream>

using namespace std;


void solve(int *A, int *B)
{
    int sum = *A+*B;
    int distance = *A-*B;
    *A=sum;
    *B=distance;

}

int main()
{
    int A,B;
    int *pA = &A, *pB = &B;
    cin>>A>>B;

    solve(pA, pB);

    cout << A << endl << B << endl;

    return 0;
}