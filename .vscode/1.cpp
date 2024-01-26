#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void unique(int a){
    int r;
    int arr[50];
    int i=0,count=0;
    while(a!=0){
        r=a%10;
        arr[i]=r;
        count++;
        i++;
        a=a/10;
    }
    int j=0; 
  while(a!=0 || j<i ){
    r=a%10;
    if(arr[j]==r){
        count=count - 1;
    }
    j++;
    
  }
  cout<<count;
    
}

int main() {
    int n;
    cin>>n;
    unique(n);
    
    return 0;
}
