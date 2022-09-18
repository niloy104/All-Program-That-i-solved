#include <stdio.h>
int main()
{
    int sum = 0, temp, rem, i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    printf("Reverse number is: %d", sum);
    return 0;
}