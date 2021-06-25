#include<stdio.h>
int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);
    int arr[n],sim[n];
    printf("enter %d numbers : ",n);
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
      sim[i]=0;
    }
    for(int j=0;j<n;j++){
      if(sim[j]!=1){
        int isok =0;
        for(int s=j;s<n-1;s++){
          if(arr[j]==arr[s]){
            if(isok>0){
              sim[s]=1;
            }
            isok = isok +1;
          }
        }
        if(isok>1){
          printf("%d , ",arr[j]);
        }
      }
      
    }
}