#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *a,n,i,item,beg,mid,end;
     printf("Enter the numbner of elements: ");          //exe create: ctrl+shift+b
     scanf("%d",&n);                                     // run c code: .\twosum.exe
     a=(int*)malloc(sizeof(int)*n);
     if(a==NULL)
     {
        printf("Allocation failed.");
     }
     else
     {
        printf("Enter the element one by one: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the element that you want to search: ");
        scanf("%d",&item);
        beg=0;
        end=n-1;
        mid=(beg+end)/2;
        while(item!=a[mid]&&beg<=end)
        {
            if(item<a[mid])
            {
                end=mid-1;
            }
            else
            {
                beg=mid+1;
            }
            mid=(beg+end)/2;
            
        } 
        if(item==a[mid])
        {
            printf("item found at podition of %d",mid+1);
        }
        else
        {    
            printf("item not found.");
        }
    }
    return 0;
}

