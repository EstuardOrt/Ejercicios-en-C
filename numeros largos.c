#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
long long num =0;
long long num2 = 1;
long long fibo;
int max_size;
printf("Ingrese un limite:\n" );
scanf("%d",&max_size);
int i;
for ( i = 0; i < max_size; i++)
{
    /* code */
    fibo = num + num2;
    num = fibo;
    num2 = num+1;
    printf("El numero actual es %I64d, %I64d, %I64d \n",fibo, num,num2 );
    sleep(1);
}



}