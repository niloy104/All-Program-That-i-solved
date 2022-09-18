//Acceptd
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            ans = ans + (max - arr[i]);
        }
    }
    printf("%d", ans);
}