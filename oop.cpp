#include <iostream>
using namespace std;

void swapNumbers(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int first = 100, last = 200;

    swapNumbers(first, last);

    cout << first << "\t" << last << endl;

    return 0;
}