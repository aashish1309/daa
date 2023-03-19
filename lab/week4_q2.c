#include<stdio.h>
#define max 100

void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}



int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quicksort(int A[], int low, int high)
{
    int partitionIndex; 

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quicksort(A, low, partitionIndex - 1);  
        quicksort(A, partitionIndex + 1, high); 
    }
}

int main(){
    int i=0,count=0;
    int arr[max]={3,4,1,56,74,32,45,332,67,444,32,11};
    while(arr[i]!=NULL){
        count++;
        i++;
    }
    printf("%d\n",count);
    printarray(arr,count);
    quicksort(arr,0,count-1);
    printarray(arr,count);
    return 0;
}