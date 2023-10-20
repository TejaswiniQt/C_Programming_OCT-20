//Write a program in C to copy the elements of one array into another array

#include <stdio.h>

int main()
{
    int n,i,arr1[30],arr2[30];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr1+i));
    }
    printf("Elements of array1 are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
        arr2[i] = arr1[i];
    }
    printf("\nElements of array2 are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
