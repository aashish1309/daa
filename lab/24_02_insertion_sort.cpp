#include<iostream>
using namespace std;

void insertionsort(int a[],int n ){
    int i,key,j,count=0;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            count++;
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    cout<<"number of comparisons:"<<count<<endl;
}

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main(){
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    insertionsort(arr,size);
    cout<<"the array after sorting is:"<<endl;
    printarray(arr,size);
}