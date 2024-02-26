#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;
    int i;
    int limit;
    cin>>limit;
    int num1;

    int ans;


    for(i=0; i<limit; i++){
        cin>>num1;
        vec1.push_back(num1);
    }

    int x;
    cin>>x;
    int n= vec1.size();

    int high =n-1;
    int low=0;

    while(low<=high){
        int mid=(low+high)/2;

        if(vec1[mid]>x){
            ans=mid;
            high=mid-1;
        }

        else{
            low= mid+1;
        }
    }
    cout<<ans<<endl;
}