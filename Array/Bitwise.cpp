#include<iostream>
using namespace std;


int main()
{

    int a=4; // 0100
    int b=5; // 0101
    a = 0;
    a = a^4; // 0000 xor 0100 = 0100 = 4
    a = a^1; // 0100 xor 0001 = 0101 = 5;
    a = a^2; // 0101 xor 0010 = 0111 = 7;
    a = a^1; // 0111 xor 0001 = 0110 = 6;
    a = a^2; // 0110 xor 0010 = 0100 = 4;
    cout << a << endl;

    return 0;
}

/*
    0110
    0011
   ------
    0101


*/