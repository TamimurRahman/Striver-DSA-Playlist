#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (array[i] > array[j + 1])
            {
                int temp = array[i];
                array[i] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }cout<<endl;
    int flag = 1;
    for (int i = 0; i < size-1; i++)
    {
        

        if ((array[i] + 1) != array[i + 1])
        {
            flag = 0;
            break;
        }
    }
    if(flag==1){
        cout<<"consucative"<<endl;
    }else{
        cout<<"NOT"<<endl;
    }

}