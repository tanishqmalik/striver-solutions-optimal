#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> arr;
    int n,num1,limit,i;

    cin>>limit;

    for(i=0; i<limit; i++){
        cin>>num1;
        arr.push_back(num1);
    }

    n = arr.size();

    int high= n-1;
    int low = 0;

    int target;
    cin>>target;

    int first = -1;
    int last= -1;

    while(low<=high){
        int mid = (low+high)/2;

        if(target==arr[mid]){
            first= mid;
            high=mid-1;
            
        }
        else if(target<arr[mid]){
            // first=mid;
            low=mid+1;
        }

        else{
            high = mid-1;
        }
    }

    first=-1;
    last=-1;
    high=n-1;
    low=0;

    while(low<=high){
        int mid = (low+high)/2;

        if(target==arr[mid]){
            first= mid;
            low=mid+1;
            
        }
        else if(target>arr[mid]){
            // first=mid;
            low=mid+1;
        }

        else{
            high = mid-1;
        }
    }

    cout <<first<<endl;
    cout <<last<<endl;

}