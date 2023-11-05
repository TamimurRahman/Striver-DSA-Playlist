#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    char ch;
    for(i=n;i>=1;i--){
        
        for(ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }cout<<endl;
    }
}