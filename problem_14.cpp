#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    char ch;
    for(i=1;i<=n;i++){
        
        for(ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }cout<<endl;
    }
}