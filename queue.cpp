#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{

    queue<int>q;

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(20);
    q.pop();
    cout << q.front() <<endl;


    return 0;
}