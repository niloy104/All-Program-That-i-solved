//Accepted.....
#include <stdio.h>
int main()
{
    int n, d;
    scanf("%d%d", &n, &d);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < d; i++)
    {
        int swap = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = swap;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}