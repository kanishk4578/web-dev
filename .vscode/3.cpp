#include<iostream>
using namespace std;
/*int swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
}*/
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8};
    int temp;
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(arr[j]>arr[j+1]){
                //swap(arr[j],arr[j+1]);
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }

 }
    for(int i=0;i<5;i++){
        cout<<"hi"<<endl;
        cout<<arr[i]<<endl;
    }
    return 0;
}