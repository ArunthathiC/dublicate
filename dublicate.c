#include<stdio.h>
void main(){
  int n,a[10],i,j;
  printf("Enter the number");
  scanf("%d",&n);
  printf("Enter the array element");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    for(j=1;j<n;j++){
      if(a[i]!=a[j]){
        printf("%d",a[i]);
      }
    }
  }
}
        
