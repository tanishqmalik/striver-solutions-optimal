#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int> > ans;
    vector<int>num;

    int n;
    cin>>n;
    int num1;

    for(int q=0; q<n; q++){
        cin>>num1;
        num.push_back(num1);
    }

    sort(num.begin(), num.end());


    for(int i=0; i<num.size(); i++){
        if(i>0 && num[i]==num[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j>k){
            int sum= num[i] + num[j]+ num[k];
            if(sum< 0){
                j++;
            }
            else if(sum> 0){
                k--;
            }

            else{
                vector<int> temp;
                temp.push_back(num[i]);
                temp.push_back(num[j]);
                temp.push_back(num[k]);

                ans.push_back(temp);
                j++;
                k--;
                while(j<k && num[j]==num[j-1]) j++;
                while(j<k && num[k]== num[k+1]) k--;
            }
        }
    }
    

    for(int q=0; q<ans.size(); q++){
        for(int w =0; w<ans[q].size(); w++){
            cout<<ans[q][w]<<" ";
        }
        cout<<endl;
    }

}


