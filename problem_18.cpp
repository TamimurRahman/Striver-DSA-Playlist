#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch = 'A'+n-1;
        for(int j=1;j<=i;j++){
            cout<<ch--<<" ";
        }cout<<endl;
    }

}