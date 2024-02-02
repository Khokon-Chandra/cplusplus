#include<iostream>
#include<string>
using namespace std;


class Solution{
	public:
   	string add(string s1, string s2){
   	   if(s1.size() < s2.size()) swap(s1,s2);
        return "hello";
   	}
};


int main(){

    string a = "12000", b = "10";

    b = string(a.size() - b.size(),'0') + b;

    int i(a.size()-1);

    cout << i << endl;

    char c = 'a';

    cout << int(c) <<endl;
    
	// int tc;
	// cin >> tc;
	// while(tc--){
	// 	string s1, s2;
	// 	cin >> s1 >> s2;
	// 	Solution ob;
	// 	string ans = ob.add(s1, s2);
	// 	cout << ans <<"\n";
	// }  
	return 0;
}