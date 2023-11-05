#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch,j;
    for(ch='A';ch<'A'+n;ch++){
        
        for(j='A';j<=ch;j++){
            cout<<ch<<" ";
        }cout<<endl;
    }
}