#include<stdio.h>
int main(){
	int count[5][4][11]={},b,f,r,v,n,a,i;
	scanf("%d",&n);
	for(i = 1;i <= n; i++){
		scanf("%d %d %d %d",&b,&f,&r,&v);
		count[b][f][r]+=v;
	}
	for(b = 1;b < 5;b++){
		for(f = 1;f < 4;f++){
			for(r = 1;r < 11;r++){
				printf(" %d",count[b][f][r]);
			}
			printf("\n");
		}
		if(b <= 3){
		for(a = 1;a <= 20; a++){
			printf("#");
		}
		printf("\n");
		}
	}		
}
