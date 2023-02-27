#include<iostream>
using namespace std;

void selectionsort(int a[],int n,int *count)
{
    int min,pos;
    for(int i=0;i<n;i++)
    {
        min=i;
        //pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                (*count)++;
                min=j;
                swap(a[i],a[min]);
            }
        }
    }
}

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

int main(){
    int size,comparison=0;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    selectionsort(arr,size,&comparison);
    cout<<"the array after sorting is:"<<endl;
    printarray(arr,size);
    cout<<"number of comparsions done:"<<comparison<<endl;
}