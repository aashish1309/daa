#include <stdio.h>
int main()
{
    int size,val;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int array[size];
    printf("enter the elements in the array:");
    for(int i=0;i<size;i++){
    scanf("%d",&array[i]);
    }
    int low=0,high=size,i=1;
    int x;
    printf("enter the element to be searched:");
    scanf("%d",&x);
    while (low <= high) 
    {
        int mid=low+(high-low)/2;
        if (array[mid] == x)
            printf("Element found at index %d\nComparision= %d",mid,i);
        if (array[mid] < x)
        {
            low = mid + 1;
            i++;
        }
        else
        {
            high = mid - 1;
            i++;
        }
    }
    return 0;
}

