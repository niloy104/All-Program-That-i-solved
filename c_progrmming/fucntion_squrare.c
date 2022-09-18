//Function | Square of a number
#include <stdio.h>
int square(int a)
{
    return a * a;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square is : %d", square(num));
}