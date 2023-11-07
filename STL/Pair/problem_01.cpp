#include<bits/stdc++.h>
using namespace std;
int main(){
 
    pair<int,string>p;
    p={102,"Tamim"};
    pair<int,string> &p1 = p;//pass by value
    p1.first = 105;
    p1.second = "kkk";
    cout<<p.first<<" "<<p.second<<endl;
}