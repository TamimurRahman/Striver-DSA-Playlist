#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 0; i <= n * 2; i++)
    {
        if (i < n-1)
        {
            for (j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }else{
            for(j=i+1;j<n*2;j++){
                cout<<"*";
            }cout<<endl;
        }


    }
}