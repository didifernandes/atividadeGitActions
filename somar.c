#include<stdio.h>
#include <assert.h>

void somar() {
  int a;
  int b;
  
int soma;
  printf("digite um numero inteiro: ");
scanf("%d", &a);
  printf("digite outro numero inteiro:  ");
scanf("%d", &b);
  soma = a + b;
printf("%d", soma);
}

int main(){
    somar();
    return 0;
}
