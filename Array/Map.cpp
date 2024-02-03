#include<iostream>
#include<map>
using namespace std;




int main()
{
    map<char,int>nums{
        {'a',1},
        {'b',2},
        {'c',3}
    };

    cout << nums.at('a') << endl;

    return 0;
}