#include<iostream>
#include<map>
using namespace std;

class DuplicateOnce
{
private:
    /* data */
public:
    void hasDuplicate(int arr[], int length){
        map<int,int>nums;
        map<int,int>::iterator it;
        for(int i=0; i<length; i++){
            it = nums.find(arr[i]);
            nums[arr[i]] = it->second + 1;
            if(it->second == 2){
                cout << arr[i] <<endl;
            }
        }
    }

};



int main()
{
    int n=7;
    int arr[n] = {1,2,1,3,6,3,6};

    DuplicateOnce duplicate;

    duplicate.hasDuplicate(arr,n);

    return 0;
}