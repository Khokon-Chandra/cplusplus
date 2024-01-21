#include<iostream>
#include<cmath>

using namespace std;

// Your Code goes here

int compute(int num1, int num2)
{
    int result;
    
    result = pow(num1,2) + pow(num2,2);
    
    return result;
}


int main()  {
    int A, B;
    cin>>A>>B;
    cout<<compute(A, B)<<endl;
    return 0;
}
