#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int number    = 1;
    bool is_prime = true;

    if(number == 0 || number == 1){
        is_prime = false;
    }

    for(int i=2; i <= number/2; i++){
        if(number % i == 0){
            is_prime = false;
            break;
        }
    }

    cout << (is_prime ? "This is prime number" : "This is not prime number") << endl;

    return 0;
}