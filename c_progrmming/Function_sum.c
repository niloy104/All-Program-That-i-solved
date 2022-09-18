#include <stdio.h>

int sub(int x, int y)
{
    return x - y;
}
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    printf("Input two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("The sum is : %d\n", sum(num1, num2));
    printf("The substraction is : %d\n", sub(num1, num2));
}
