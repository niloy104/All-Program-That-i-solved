#include <stdio.h>

int fact(int a)
{
    if (a == 1)
        return 1;
    else
        return a * fact(a - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int result = fact(n);

    printf("%d factorial is : %d", n, result);
}