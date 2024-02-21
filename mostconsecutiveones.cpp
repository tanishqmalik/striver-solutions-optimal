#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>temp;
    vector<int> ans;
    int n;
    cin>>n;
    int num1;
    int count=0;
    int maxi=0;

    for(int i=0; i<n; i++){
        cin>>num1;
        temp.push_back(num1);
    }

    for(int i=0; i<temp.size(); i++){
        if(temp[i]==1){
            count++;
        }
        else{
            count=0;
        }
    }

    maxi =max(count,maxi);

    cout<<maxi<<endl;
}