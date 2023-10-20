/* Design a program to concatenate two strings without using standard library functions, 
only pointers.
WTD: Traverse the first string till the end and then copy the second string from that point.
(e.g.: I/P: char *str1 = "Good ", *str2 = "Morning" ,O/P: "Good Morning" )*/

#include<stdio.h>
void concatenate_str(char *str1,char *str2);
int main()
{
    char str1[50] = "Good";
    char str2[25] = "Morning";
    concatenate_str(str1,str2);
    printf("Concatenatoin of string: %s\n",str1);
    return 0;
}

void concatenate_str(char *str1,char *str2)
{
    while(*str1)
    {
        str1++;
    }
    
    while(*str2)
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}