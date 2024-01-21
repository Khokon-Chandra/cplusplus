#include<iostream>

using namespace std;

void reverseArr(int arrR[], int N)
{
    for(int i = 0; i < N/2; i++)
    {
        int temp   = arrR[i];
        arrR[i]     = arrR[N-i-1];
        arrR[N-i-1] = temp;
    }
}

int main()
{
    int N=5;

    int arr[N] = {1,2,3,4,5};

    reverseArr(arr,N);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}