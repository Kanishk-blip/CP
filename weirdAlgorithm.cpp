#include<iostream>
using namespace std;
int main (){
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if ((n&1)!=0){
            n=3*n+1;
            cout<<n<<" ";
        }
        else{
            n=n>>1;
            cout<<n<<" ";
        }
    }

}