#include <iostream>
using namespace std;
#include<vector>


int main(){
    vector<int> a;
    vector<int> b;
    int i,j;
    i=0;
    j=0;

    vector<int> ans;

    int num1,num2;

    int size1, size2;

    cin>>size1;

    for(int q=0; q<size1; q++){
        cin>>num1;
        a.push_back(num1);
    }

    cin>>size2;

    for(int q=0; q<size2; q++){
        cin>>num2;
        b.push_back(num2);
    }

    while(i<a.size() && j<b.size()){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }

        else if(a[i]<b[j]){
            i++;
        }

        else{
            j++;
        }

    }


    for(int d=0; d<ans.size(); d++){
        cout<<ans[d]<<" ";
    }
    cout<<endl;

}