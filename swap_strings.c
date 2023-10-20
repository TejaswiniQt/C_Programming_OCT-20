/* Implement a program that swaps two strings using pointers to pointers.
WTD: Use a pointer to pointer to swap the base addresses of the two strings.
(e.g.: I/P: char *str1 = "hello", *str2 = "world" ,O/P: str1 = "world", str2 = "hello" ) */

#include<stdio.h>

int string_length(char *str);
void swap_strings(char **str1,char **str2,int len1,int len2);

int main()
{
    char *str1 = "hello";
    char *str2 = "world";
    int len1,len2;
    len1 = string_length(str1);
    len2 = string_length(str2);
    if(len1 == len2)
    {
        printf("Before swap:\n");
        printf("str1 = %s, str2 = %s\n",str1,str2);
        swap_strings(&str1,&str2,len1,len2);
        printf("After swap:\n");
        printf("str1 = %s, str2 = %s\n",str1,str2);
    }
    else
    printf("Length of two strings should be same\n");
    return 0;
}

int string_length(char *str)
{
    int length = 0;
    while(*str)
    {
        length++;
        str++;
    }
    return length;
}

void swap_strings(char **str1,char **str2,int len1,int len2)
{
    char* temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}