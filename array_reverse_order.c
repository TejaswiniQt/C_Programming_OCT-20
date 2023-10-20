// Write a program in C to read n number of values in an array and display them in reverse order.

#include <stdio.h>

int main()
{
    int n,i,arr[30];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("The values stored in the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe values stored in the array in reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
