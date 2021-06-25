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
    for(int j=0;j<n;j++){
      if(arr[j]>=0){
        if(arr[j]%2==0){
          printf("%d , ",arr[j]);
        }
      }
    }
}