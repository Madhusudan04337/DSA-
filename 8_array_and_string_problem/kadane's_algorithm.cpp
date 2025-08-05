#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> arr={-2,1,-3,4,-1,2,1,-5,4};
    int csum=0;
    int ans=0;
    for (int i=0;i<arr.size();i++){    
        csum=csum+arr[i];
        if(csum<0){
            csum=0;
        }
        ans= max(csum,ans);
    }
    cout<<ans;
    return 0;
}