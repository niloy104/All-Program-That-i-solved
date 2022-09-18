//Accepted
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans1 = n;
    int temp;
    int i = 0;
    int arr[3];
    while (n > 0)
    {
        temp = n % 10;
        arr[i] = temp;

        ++i;
        n = n / 10;
    }
    int ans2 = arr[0] * 100 + arr[2] * 10 + arr[1] * 1;
    int ans3 = arr[1] * 100 + arr[0] * 10 + arr[2] * 1;
    int ans = ans1 + ans2 + ans3;
    printf("%d", ans);
}