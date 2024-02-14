#include<iostream>
#include<map>
using namespace std;

class DuplicateOnce
{
private:
    /* data */
public:
    int firstNonRepeatedNumber(int arr[], int length){
        map<int,int>nums;
        map<int,int>::iterator it;
        int nonRepeatingNumber = 0;
        for(int i=0; i<length; i++){
            nums[arr[i]]++;
        }
    }

};



int main()
{
    int n=7;
    int arr[n] = {1,2,1,3,6,3,6};
    int firstNonRepeatedNumber;

    DuplicateOnce duplicate;

    duplicate.firstNonRepeatedNumber(arr,n);

    return 0;
}