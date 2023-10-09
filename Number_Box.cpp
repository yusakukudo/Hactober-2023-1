#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<(2*n-1);i++){
        if(i<n){
            for(int j1=0;j1<i+1;j1++){
                cout<<n-j1<< " ";
            }
            for(int j2=n-1-i;j2>0;j2--){
                cout<<n-i<<" ";
            }
            for(int j3=n-1-i;j3>0;j3--){
                cout<<n-i<<" ";
            }
            for(int j4=0;j4<i;j4++){
                cout<<n-i+j4+1<<" ";
            }
        }
        else {
            for(int k1=0;k1<n-i+n-1;k1++){
                cout<<n-k1<<" ";
            }
            for(int k2=n;k2<i+1;k2++){
                cout<<i-n+2<<" ";
            }
            for(int k2=n;k2<i+1;k2++){
                cout<<i-n+2<<" ";
            }
            for(int k4=0;k4<n+n-i-2;k4++){
                cout<<i-n+k4+3<<" ";
            }
        }
        cout<<endl;
    }
}
