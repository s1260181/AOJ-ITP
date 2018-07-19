#include<stdio.h>
int main(){
  int i,j,k,n,m,l;

  scanf("%d%d%d",&n,&m,&l);
  int A[n][m],B[m][l];
  long long C[n][l];
  for(i = 0;i < n;i++){
    for(j = 0;j < m;j++){
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0;i < m;i++){
    for(j = 0;j < l;j++){
      scanf("%d",&B[i][j]);
    }
  }
  
  for(i = 0;i < n;i++){
    for(j = 0;j < l;j++){
      C[i][j] = 0;
      for(k = 0;k < m;k++){
	C[i][j] += A[i][k] * B[k][j];
      }
      printf("%ld",C[i][j]);
      if(j != l-1){
	printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
