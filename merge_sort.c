#include<stdio.h>
#include<conio.h>
void merge(int arr[], int low,int mid,int high)
{
    int temp[50];
    int left=low;
    int right=mid+1;
    int k=low;
    int i;

    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp[k]=arr[left];
            left++;
        }
        else
        {
            temp[k]=arr[right];
            right++;
        }
        k++;
    }

    while(left<=mid)
    {
        temp[k]=arr[left];
        left++;
        k++;
    }
    while(right<=high)
    {
        temp[k]=arr[right];
        right++;
        k++;
    }
    for(i=low;i<=high;i++)
    {
        arr[i]=temp[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if(low>=high)
    return;
    int mid= (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main()
{
    int arr[30], n ,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter number one by one:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    printf("The sorted arry is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}