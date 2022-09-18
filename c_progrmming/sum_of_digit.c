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
        sum = sum + rem;
        temp = temp / 10;
    }
    printf("Sum of digit: %d", sum);
    return 0;
}