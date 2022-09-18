#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], b[20], t[20];
    printf("Enter string for a: ");
    gets(a);
    printf("Enter string for b: ");
    gets(b);
    printf("Before swapping\n");
    printf("String a : ");
    puts(a);
    printf("String b : ");
    puts(b);
    strcpy(t, a);
    strcpy(a, b);
    strcpy(b, t);
    printf("After swapping\n");
    printf("String a : ");
    puts(a);
    printf("String b : ");
    puts(b);
    return 0;
}