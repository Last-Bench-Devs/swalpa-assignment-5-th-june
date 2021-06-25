#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter 1 st number : ");
    scanf("%d",&n1);
    printf("Enter 2 nd number : ");
    scanf("%d",&n2);
    printf("Enter 3 rd number : ");
    scanf("%d",&n3);
    if((n1>=n2)&&(n1>=n3))
    {
        if(n2>=n3)
        {
            printf("\n values of n1 , n2 n3 are : %d %d %d",n1,n2,n3);
        }
        else
        {
            printf("\n values of n1 , n2 n3 are : %d %d %d",n1,n3,n2);
        }
    }
    else if((n2>=n1)&&(n2>=n3))
    {
        if(n1>=n3)
        {
            printf("\n values of n1 , n2 n3 are : %d %d %d",n2,n1,n3);
        }
        else
        {
            printf("\n values of n1 , n2 n3 are : %d %d %d",n2,n3,n1);
        }
    }
    else if((n3>=n1)&&(n3>=n2))
    {
        if(n1>=n2)
        {
            printf("\n values of n1 , n2 n3 are : %d %d %d",n3,n1,n2);
        }
        else
        {
            printf("\n values of n1 , n2 n3 are : %d %d %d",n3,n2,n1);
        }
    }
}
