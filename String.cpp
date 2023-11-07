#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            char ch = s[i]+32;
            s2.push_back(ch);
        }else{
           s2.push_back(s[i]); 
        }
        
    }
    cout<<s2<<endl;
}