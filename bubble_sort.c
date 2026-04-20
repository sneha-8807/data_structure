#include<stdio.h>
#include<conio.h>

void bubble_sort(int arr[], int n)
{
    int i,j,didswap,temp;
    for(i=n-1;i>=0;i--)
    {
        didswap=0;
        for(j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswap=1;
            }

        }
        if(didswap == 0)
        {
            break;
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
    bubble_sort(arr,n);
    printf("The sorted arry is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}