#include<iostream>
using namespace std;

int function(int arr2[n],int arr1[], int m,int n){
    for (int i=0;i <m+n;i++){
        arr1[i+3]=arr2[i];
    }
} 

int main(){
    int m =3;
    int n =4;
    int arr1[m+n] ={3,5,6};
    int arr2[n] ={1,2,4,7};
    cout<<"Updated array : ";
    for (int i=0; i<m+n;i++){
        cout<<arr1[i]<<" ";
    }

}