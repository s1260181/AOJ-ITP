#include<stdio.h>
int main(){
  int n,x,k,i,j,count=0;
 

  while(1){
    scanf("%d %d",&n,&x);
    if(n == 0&& x == 0)break;
    for(i = 1;i <= n-2;i++){
      for(j = i+1;j <= n-1;j++){
	for(k = j+1;k <= n;k++){
	  if(x == i+j+k){
	    count++;
	  }
	}
      }
      }
    printf("%d\n",count);
    count = 0;
  }
  return 0;
}
	
	
		     
