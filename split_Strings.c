/*Implement a function that splits a string into two halves and returns pointers to the 
beginning of each half.
WTD: Use pointer arithmetic to find the middle of the string. Return the original and the 
middle pointers.
(e.g.: I/P: "HelloWorld" ,O/P: "Hello", "World" )*/

#include <stdio.h>

void split_string(char *str,char **ptr1,char **ptr2);

int main()
{
    char str[15] = "HelloWorld";
    char *ptr1,*ptr2;
    split_string(str,&ptr1,&ptr2);
    printf("%s\t%s\n",ptr1,ptr2);
    return 0;
}

void split_string(char *str,char **ptr1,char **ptr2)
{
    int count = 0,mid,i=0;
    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    mid = count / 2;
    for(i=count; i>=mid; i--)
    {
        str[i+1] = str[i];
    }
    str[i+1] = '\0';
    *ptr2 = (char *)(str+mid+1);
    *ptr1 = (char *)str;
}