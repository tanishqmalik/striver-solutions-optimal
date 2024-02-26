#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec1;
    int n,num1,i,limit,ans;

    cin>>limit;

    for(i=0; i<limit; i++){
        cin>>num1;
        vec1.push_back(num1);
    }



    int x;
    cin>>x;

    n= vec1.size();

    int high=n-1;
    int low=0;

    ans=n;

    while(low<=high){
        int mid=(low+high)/2;

        if(vec1[mid]>=x){
            ans=mid;
            high=mid-1;
        }

        else{
            low=mid+1;
        }
    }
    cout << ans<<endl;
}




// int searchInsert(vector<int>& arr, int m)
// {
	
	
// 	int low=0;
// 	int n = arr.size();
// 	int ans =n;
// 	int high=n-1;

// 	while(low<=high){
// 		int mid=(low+high)/2;

// 		if(arr[mid]>=m){
// 			ans=mid;
// 			high=mid-1;
// 		}

// 		else{
// 			low=mid+1;
// 		}
// 	}

// 	return ans;
// }