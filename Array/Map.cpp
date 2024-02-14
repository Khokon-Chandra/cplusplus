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
    
    nums['k'] = 20;
    cout << nums.at('k') << endl;

    return 0;
}