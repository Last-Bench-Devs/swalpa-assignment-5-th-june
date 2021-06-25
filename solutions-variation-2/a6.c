#include <stdio.h>
int main()
{
    printf("Enter the large number: ");
    char a[100];
    int i = 0;
    while (i < 100 && (a[i] = getchar()) != '\n')
    {
        i++;
    }
    printf("Number Stored: ");
    a[i] = '\0';
    printf("%s\n", a);
}