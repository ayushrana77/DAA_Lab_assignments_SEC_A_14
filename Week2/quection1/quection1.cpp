#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr,int key)
{
    int low=0,high= arr.size()-1;
    while(low <= high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid] == key)
        {
            if(mid==0 || arr[mid] != arr[mid-1])
            {
                return mid;
            }
            else{
                high = mid -1;
            }
        }
        else if(arr[mid] < key)
        {
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}
int freq(vector<int> arr,int idx)
{
    int res = 1;
    while(idx < arr.size() && arr[idx] == arr[idx+1])
    {
       
        res++;
        idx++;
    }
    return res;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,size,key,x;
    cin>>t;
    while(t--)
    {    
        cin>>size;
        vector<int>arr(size);
        for(int i=0;i<size;i++)
        {
            cin>>x;
            arr[i] = x;
        }
        cin>>key;
        int k = binarySearch(arr,key);
        if( k == -1)
        {
            cout<<"Key not present";

        }else{
           cout<<arr[k]<<" - "<<freq(arr,k);
        }
        cout<<endl;
    }
    return 0;
}