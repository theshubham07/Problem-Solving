// Program for finding if the given string is a palindrome
#include<stdio.h>
int palindrome(char *str)
{
    char *q , r;
    q = str;
    while(*q != '\0')
    {
        q++;
    }
    q--;
    while(str < q)
    {
        r = *str;
        *str = *q;
        *q = r;
        str++;
        q--;
    }
    if(str == q)
       return 0;
    return -1;   
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    int pal = palindrome(str);
    if(pal == -1)
       printf("Given string is not a plaindrome");
    else
      printf("Given string is palindrome");   
}