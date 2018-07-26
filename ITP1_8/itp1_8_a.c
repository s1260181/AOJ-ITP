#include<stdio.h>
int main(){
  char a;

  while(1){
    scanf("%c",&a);
    if('a' <= a && a <= 'z'){
      printf("%c",a-32);
    }
    else if('A' <= a && a <= 'Z'){
      printf("%c",a+32);
    }
    else printf("%c",a);
    if(a == '\n')break;
  }
}
