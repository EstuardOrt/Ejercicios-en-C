#include <stdio.h>
#include <stdlib.h>

int main (){
    int num[30];
    char letra;
    int i = 0;
    int multi = 1;
    do
    {
        printf("Ingrese un numero:\n");
        scanf("%d",&num[i]);
        multi *= num[i];
        printf("Ingresaste %d Deseas ingresar otro numero: s/n \n",num[i]);
        scanf("%s",&letra);
        
        i++;
            
        
    } while (letra == 's');
    
    
    printf("Ingresaste %d numeros y la multiplicacion de todo es: %d",i,multi);

}
