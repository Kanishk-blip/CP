#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
 long long int arr[n];
 
 for (int i=0;i<n;i++){
   cin>> arr[i];
     
     }

 long long int sum=0;
 for (int i=1;i<n;i++){
    if (arr[i-1]>arr[i]){
      sum+=arr[i-1]-arr[i];
      arr[i]+=(arr[i-1]-arr[i]);
          }
 }
 cout<<sum;
 
    return 0;
}