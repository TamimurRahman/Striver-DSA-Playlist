#include <bits/stdc++.h>
using namespace std;

void printVec(vector<string> v)
{
    cout << "Size: " << v.size() << endl;
     
    // size() function time copx O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
   
    cout << endl;
}
int main()
{
    vector<string> v;// v(vector size inetialize,default value set)
  int n;
   cin>>n;
while(n--){
    string s;
    cin>>s;
    
    v.push_back(s);
}
vector<string>v2=v;
printVec(v);
printVec(v2);
}
/* v.push_back(7);
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    printVec(v);
    v.push_back(x);//push_back function time copx O(1)
}
*/