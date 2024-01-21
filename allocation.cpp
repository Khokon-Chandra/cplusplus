#include <iostream>

using namespace std;

int main()
{
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));

    cout << ptr << endl;

    free(ptr);

    cout << ptr << endl;
}