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
    printf("Printing unique integers in reverse:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        int c = a[i], f = 0;
        for(int j=i+1; j<n; j++){
            if(c==a[j]){
                f = 1;
                break;
            }
        }
        if(!f)
            printf("%d ", c);
    }
    printf("\n");
}