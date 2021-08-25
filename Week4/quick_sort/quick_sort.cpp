#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include <time.h>
using namespace std;

int privot(int arr[], int l, int r,int &c,int &s)
{
    int x = rand() % (r-l+1)+l;
    swap(arr[x],arr[r]);
    int pv = arr[r];
    int i = l-1;
    for(int j=l;j<=r-1;j++)
    {
        c++;
        if(arr[j] < pv)
        {
            s++;
            i++;
            swap(arr[i],arr[j]);
        }

    }
    s++;
    swap(arr[i+1],arr[r]);
    return (i+1);
} 

void quick_sort(int arr[], int l,int r,int &c,int &s)
{
    
    if(l<r)
    {
        int p = privot(arr,l,r,c,s);
        quick_sort(arr,l,p-1,c,s);
        quick_sort(arr,p+1,r,c,s);
       
    }
 
}
int main()
{
    srand (time(NULL));
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,s=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        quick_sort(arr,0,n-1,c,s);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparsion :"<<c<<endl;
        cout<<"Swap :"<<s<<endl;

    }

}