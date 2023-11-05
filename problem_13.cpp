#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,sum = 0;
    for(i=1;i<n;i++){
        for(j=i;j<=(i*(i+1))/2;j++){
            cout<<++sum<<" ";
        }cout<<endl;
    }
}