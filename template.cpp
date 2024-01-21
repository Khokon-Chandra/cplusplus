#include<iostream>
using namespace std;

template<class ArrayType>
ArrayType index_of_largest(ArrayType arrayItem[], int length)
{
    return arrayItem[1];
}


int main()
{
    int length = 3;

    int roles[length] = {1,2,3};

    double results[length] = {3.50, 4.50, 2.80};

    cout << index_of_largest<int>(roles, 10) << endl;

    return 0;
}