#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", (i + 1));
        scanf("%d", &a[i]);
    }
    int m = 2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    printf("The common factors are:\n");
    for (int j = 1; j <= m; j++)
    {
        int c = 0;
        for (int k = 0; k < n; k++)
        {
            if (a[k] % j == 0)
            {
                c++;
            }
            else
            {
                continue;
            }
        }
        if (c == n)
        {
            printf("%d ", j);
        }
    }
}
