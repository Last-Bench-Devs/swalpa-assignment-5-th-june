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
    printf("Printing in reverse:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}