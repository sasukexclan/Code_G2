#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; int key; cin>>key; int no_of_deleted_element=0;
    int arr[n];   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        no_of_deleted_element++;
        for(int j=i;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
    }
    
    int op=n-no_of_deleted_element;
    cout<<op;
}
