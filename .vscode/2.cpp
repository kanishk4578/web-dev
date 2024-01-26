#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int r;
    int arr[100],i=0;
    while(n!=0){
    r=n%10;
    arr[i]=r;
    i=i+1;
    n=n/10;
    }
    int temp;
    for(int k=0;k<i-1;k++){
   for(int j=0;j<i-1-k;j++){
    if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
   }
    }
    cout<<i<<endl;
    int count=i;
    cout<<count<<endl;
    int g=0;
    for(int k=0;k<i-1;k++){
    for(int j=0;j<i-1-k;j++){
        if(arr[g]==arr[j+1+g]){
            count = count-1;
        }
       
    }g++;}
    cout<<count;

  

    return 0;
}