#include<stdio.h>
int main(){
	int a,b,i,j;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==b && a==0) break;
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
}

