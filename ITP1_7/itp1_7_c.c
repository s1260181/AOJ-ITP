#include<stdio.h>
int main(){
  int a[100][100];
  int r,c,i,j,sum=0,ans=0;

  scanf("%d %d",&r,&c);

  for(i = 0;i < r;i++){
    for(j = 0;j < c;j++){
      scanf("%d",&a[i][j]);
      ans += a[i][j];
    }
  }
  for(i = 0;i < r;i++){
    for(j =0;j < c;j++){
      printf("%d ",a[i][j]);
      sum += a[i][j];
    }
    printf("%d\n",sum);
    sum = 0;
  }
  
  for(j = 0;j < c;j++){
    for(i = 0;i < r;i++){
      sum += a[i][j];
    }
    printf("%d ",sum);
    sum = 0;
  }
  printf("%d\n",ans);
  return 0;
}
