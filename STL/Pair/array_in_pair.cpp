#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> arr[3]={{101,"Am Tamim"},{102,"Bart day"},{103,"Lock Man"}};
    swap(arr[0],arr[2]);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}