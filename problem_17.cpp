#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,s;
    for( i=n;i>=1;i--){
        for(s=1;s<=(i*2)-2;s++){
            cout<<" ";
        }
        char ch = 'A';
        for(j=1;j<=n-i+1;j++){
            cout<<ch++<<" ";
        }
        ch--;
        for(j=1;j<n-i+1;j++){
            cout<<--ch<<" ";
        }
        cout<<endl;
    }
}