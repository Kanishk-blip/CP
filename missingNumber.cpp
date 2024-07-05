#include<iostream>
using namespace std;
int main (){
    long long n;
    cin>>n;
    cout<<"\n";
    long long sum=0;
    long long a=0;
    long long add=0;
    for (long long i=1;i<n;i++){
        cin>>a;
        add=add+a;
        
    }
    sum=(n*(n+1))/2;
    cout<<"\n";
    cout<<sum -add;

    return 0;
}