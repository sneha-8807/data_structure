#include<stdio.h>
#include<stdlib.h>

void bubble_sort();
void insertion_sort();
void selection_sort();
int min(int*, int, int);

int main() {
    int choice;
    while (1) {
        printf("\nPress:\n 1 for Bubble Sort\n 2 for Insertion Sort\n 3 for Selection Sort\n 4 for Exit.");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: bubble_sort(); break;
            case 2: insertion_sort(); break;
            case 3: selection_sort(); break;
            case 4: exit(1);
            default: printf("You entered a wrong choice! Try again.");
        }
    }
    return 0;
}

void bubble_sort() 
{
    int *a, n, i, j, t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    if (a == NULL) {
        printf("Allocation failed.");
        return;
    }

    printf("Enter the elements one by one: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) 
    { 
        for (j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1])
             {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("Using Bubble Sort, the sorted array is: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    free(a);  
}

void insertion_sort()
{
    int *a, n, i, j, t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    if (a == NULL) 
    {
        printf("Allocation failed.");
        return;
    }

    printf("Enter the elements one by one: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++) 
    {
        t = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > t) 
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }

    printf("Using Insertion Sort, the sorted array is: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    free(a);
}

void selection_sort() 
{
    int *a, n, i, j, t, loc;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    if (a == NULL) 
    {
        printf("Allocation failed.");
        return;
    }

    printf("Enter the elements one by one: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) 
    {
        loc = min(a, i, n - 1);  
        if (i != loc) 
        {
            t = a[i];
            a[i] = a[loc];
            a[loc] = t;
        }
    }

    printf("Using Selection Sort, the sorted array is: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    free(a);  
}

int min(int *a, int i, int n) 
{
    int minimum = a[i], location = i, j;
    for (j = i + 1; j <= n; j++) 
    {
        if (a[j] < minimum) 
        {
            minimum = a[j];
            location = j;
        }
    }
    return location;
}
