#include<stdio.h>
#include<conio.h>

void selection_sort(int arr[], int n)
{
    int i , mini ,j, temp;
    for(i=0;i<=n-2;i++)
    {
        mini=i;
        for(j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        temp=arr[mini];
        arr[mini] = arr[i];
        arr[i]=temp;
    }
}

int main()
{
    int arr[30],n ,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}