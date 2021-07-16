#include<iostream>
#include<vector>
using namespace std;
bool linearSearch(vector<int> arr,int key,int &comp)
{
    int i;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i] == key)
        {
            break;
        }
    }
    comp = i+1;
    return i==arr.size();
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i] = x;
    }
    int key;
    int comp=0;
    cin>>key;
    if(!linearSearch(arr,key,comp))
    {
        cout<<"FIND "<<"total number of comparisons :"<<comp;

    }else{
        cout<<"NOT FIND ";
    }
    return 0;
}