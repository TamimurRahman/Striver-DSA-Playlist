#include <bits/stdc++.h>
using namespace std;
void printVc(vector<pair<int, int>> v)
{

    cout << "printVc function " << endl;
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
int main()
{
    vector<pair<int, int>> v;
    int size;
    cout << "Input vector size : ";
    cin >> size;
    cout << "Input values : " << endl;
    for (int i = 0; i < size; i++)
    {
        int x, y;

        cin >> x >> y;
        v.push_back({x, y});
        //v.push_back(make_pair(x,y));
    }
    printVc(v);
}
