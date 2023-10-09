#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i==0){
            for(int j1=0;j1<n;j1++){
                if(j1==0 || j1==n-1){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }
        }else if(i==((n+1)/2)){
            for(int j2=0;j2<n;j2++){
                cout<<"*";
            }
        }
        else{
            for(int j3=0;j3<n;j3++){
                if(j3==0 || j3==n-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;

    }
}
