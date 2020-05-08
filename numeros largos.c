#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
int num =0;
int num2 = 1;
int fibo = 0;
int max_size;
printf("Ingrese un limite:\n" );
scanf("%d",&max_size);
int i;
for ( i = 0; i < max_size; i++)
{
    fibo = num + num2;
    num = num2;
    num2 = fibo;
    printf("El numero actual es %d \n",fibo );
}



}