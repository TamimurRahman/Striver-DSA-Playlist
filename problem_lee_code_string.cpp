#include<bits/stdc++.h>
using namespace std;
bool isplandrome(string s);
int main(){
    string s,s2;
    getline(cin,s);
    bool res = isplandrome(s);
    cout<<res<<endl;

    
}
bool isplandrome(string s){
 int len = s.size();
 string s2;
    for(int i=0;i<len;i++){
        if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z'|| s[i]>='0'&&s[i]<='9'){
            char ch = s[i];
            if(ch>='A'&&ch<='Z'){
                s2.push_back(tolower(ch));
            }else{
                s2.push_back(s[i]);
            }
            
        }
    }
    
    int flag = 1;
    for(int i=0;i<(s2.size())/2;i++){
        if(s2[i]==s2[((s2.size())-1)-i]){
            flag = 1;
            cout<<s2[i]<<endl;
        }
        else{
            flag = 0;
            break;
        }
    }
     cout<<s2<<endl;
    if(flag==1){
        return 1;
    }else{
        return 0;
    }
   
    
}
