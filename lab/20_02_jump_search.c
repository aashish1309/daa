#include<stdio.h>
#include<math.h>

    int jumpsearch(int arr[],int size,int key){
    int start=0,end=sqrt(size);
    while(arr[end]<=key && end<size)
    {
        start=end;
        end=end+sqrt(size);
        if(end>size-1)
        {
            end=size;
        }
    }
    for(int i=start;i<end;i++)
    {
        if (arr[i]==key){
        printf("element found");
        break;
        }
    else{
        printf("not found");
        break;
    }
    }
}
int main(){

    int size,key;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key to be searched in the array:");
    scanf("%d",&key);
    jumpsearch(arr,size,key);
    return 0;
}