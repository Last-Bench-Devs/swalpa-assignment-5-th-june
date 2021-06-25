#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int n1, n2, n3;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter n3: ");
    scanf("%d", &n3);
    if (n2 < n1)
    {
        swap(&n1, &n2);
    }
    if (n3 < n1)
    {
        swap(&n1, &n3);
    }
    if (n3 < n2)
    {
        swap(&n3, &n2);
    }
    printf("n1: %d\nn2: %d\nn3: %d\n", n1, n2, n3);
}