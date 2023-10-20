/*. Create a function that segregates even and odd values of an integer array using 
pointers.
WTD: Use two pointers, one starting from the beginning and the other from the end. 
Traverse and swap even and odd numbers until the two pointers meet.
(e.g.: I/P: int arr[] = {12,34,9,8,45,90} ,O/P: {12,34,8,90,9,45} )*/

#include<stdio.h>

int main()
{
    int arr[] = {12,34,9,8,45,90};
    int size,temp,i;
    int *ptr1,*ptr2;
    size = (sizeof(arr)/sizeof(arr[0]));
    ptr1 = arr;
    ptr2 = &arr[size-1];
    for(i=0; i<(size/2); i++)
    {
        if((*ptr1%2 != 0) && (*ptr2%2 == 0))
        {
            temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;
        }  
        ptr1++;
        ptr2--;
    }
    printf("Array contains: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}