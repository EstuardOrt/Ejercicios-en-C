#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char * argv[]){
    char * palabra;
    int num1;
    scanf("%s", &palabra);
    printf("Ingresaste: %s \n", &palabra);
    printf("Ingresa un numero:\n");
    scanf("%d", &num1);

    printf("\nIngresaste %d y su multiplicacion por 2 es %d",num1,num1*2);
    

}
