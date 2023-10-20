//Write a program in C to count the total number of duplicate elements in an array.

#include <stdio.h>

int main()
{
    int n,i,j,count=1,count1=0,arr1[30],arr2[30],arr3[30];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr1+i));
    }
    for(i=0;i<n; i++)
    {
	arr2[i]=arr1[i];
	arr3[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
				{
				arr3[j]=count;
				count++;
				}
        }
        count = 1;
    }
    for(i=0; i<n; i++)
    {
      if(arr3[i]==2)
      {
      count1++;
      }
    }
    printf("Total number of duplicate elements found in the array is: %d\n",count1);
    return 0;
}

