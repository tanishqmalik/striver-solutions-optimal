// Union of Two Sorted Arrays

#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a;
    vector<int> b;
    int size1,size2;

    int element1,element2;

    vector<int> unionArray;

    cin>>size1;


    for(int q = 0; q<size1; q++){
        cin>>element1;
        a.push_back(element1);
    }

    cin>>size2;


    for(int w= 0; w<size2; w++){
        cin>>element2;
        b.push_back(element2);
    }

    int i=0;
    int j=0;

    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            if(unionArray.size()==0 || unionArray.back()!= a[i]){
                unionArray.push_back(a[i]);
            }
            i++;
        }

        else{
            if(b[j]<=a[i]){
                if(unionArray.size()==0 || unionArray.back()!=b[j]){
                    unionArray.push_back(b[j]);
                }
            }
            j++;
        }
    }


    while(i<a.size()){
        if(unionArray.size()==0 || unionArray.back()!= a[i]){
            unionArray.push_back(a[i]);
        }
        i++;
    }


    while(j<b.size()){
        if(unionArray.size()==0 || unionArray.back()!= b[j]){
            unionArray.push_back(b[j]);
        }
        j++;
    }

    for(int k=0; k<unionArray.size(); k++){
        cout<<unionArray[k]<<" ";
    }
    cout << endl;

}