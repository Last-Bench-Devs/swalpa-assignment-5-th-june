#include<stdio.h>
int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d numbers : ",n);
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    for(int j=n-1;j>=0;j--){
      printf("%d , ",arr[j]);
    }
}
