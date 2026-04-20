//Linear search
#include<stdio.h>
#include<malloc.h>
int main()
{
   int *a,n,i,item;
   printf("Enter the number of elements in array: ");
   scanf("%d",&n);
   a=(int*)malloc(sizeof(int)*n);
   if(a==NULL)
   {
     printf("Allocation fail;ed.");
     return 0;
   }
   else
   {
	printf("Enter the element one by one: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}

   }
   printf("Enter the element which you want to search: ");
   scanf("%d",&item);
   for(i=0;i<n;i++)
   {
      if(item==*(a+i))
      {
	printf("Item is found.");
	break;
      }
   }
      if(i==n)
      {
	printf("Item not found.");
      }
      return 0;
}
