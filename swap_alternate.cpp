#include<iostream>
using namespace std;

void swap_alternate(int arr[],int n)
{
 int i,temp; 
  for(i=0;i<n;i=i+2)
    {
        if(i+1<n)
       { temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
       }
    }
}
int main()
{
    int i,arr[20],n;
    int temp;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements in array:";
    for(i=0;i<n;i++)
       cin>>arr[i];
    cout<<endl;
    cout<<"before swapping array:";
    for(i=0;i<n;i++)
       cout<<arr[i]<<" ";
    swap_alternate(arr,n);
    cout<<endl;
    cout<<"after swapping array:";
    for(i=0;i<n;i++)
      cout<<arr[i]<<" ";
}