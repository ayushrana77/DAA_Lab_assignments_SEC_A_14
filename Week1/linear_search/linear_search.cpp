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
        int comp=0;
        cin>>key;
        if(!linearSearch(arr,key,comp))
        {
            cout<<"Present "<<comp;

        }else{
            cout<<"NOT Presrnt "<<comp;
        }
        cout<<endl;
    }
    return 0;
}