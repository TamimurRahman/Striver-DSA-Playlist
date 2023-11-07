#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
     for(auto &value : v){
        value.first = value.first+1;
        cout<<value.first<<" "<<value.second<<endl;
     }
     
     cout<<"Check the orginal value is change "<<endl;
     for(auto value : v){
       // value.first = value.first+1;
        cout<<value.first<<" "<<value.second<<endl;
     }
     auto a = "Tamimur Rahman";

     
}