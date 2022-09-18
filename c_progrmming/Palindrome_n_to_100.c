#include <stdio.h>
int main()
{
    int sum, temp, rem, i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (num = 1; num <= 100; num++)
    {
        temp = num;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum * 10 + rem;
            temp = temp / 10;
        }
        if (num == sum)
            printf("%d ", num);
    }

    return 0;
}
