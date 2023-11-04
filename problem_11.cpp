#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 1; i <=n; i++)
    {
        for(j=i;j>=1;j--){
            if(j%2==0){
                cout<<"0 ";
            }else{
                cout<<"1 ";
            }
        }cout<<endl;
    }
}