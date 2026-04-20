#include<stdio.h>
#include<conio.h>
void insertion(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<=n-1;i++)
    {
        j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j]=temp;

            j--;
        }
    }
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
    insertion(arr,n);
    printf("The sorted arry is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}