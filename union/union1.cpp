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

    int i,j;

    for(j=0,i=size1; j<size2; j++){
        a[i]=b[j];
        // unionArray.push_back(a[i]);
        i++;
    }

    for(i=0; i<size1 + size2; i++){
        cout<<a[i]<<" ";
    }
}