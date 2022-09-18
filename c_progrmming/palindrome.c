#include <stdio.h>
int main()
{
    int sum = 0, temp, rem, i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum*10 + rem;
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is Palindrome number", n);
    else
        printf("Not Palindrome");
    return 0;
}