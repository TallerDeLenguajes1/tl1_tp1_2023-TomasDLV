#include <stdio.h>
int main(){
    printf("Hola mundo");
    int *punt,var;
    punt = &var;

    printf("\nEl contenido del puntero es: %d",*punt);
    printf("\nLa direccion de memoria almacenada por el puntero es: %d",punt);
    printf("\nLa direccion de memoria de la variable es: %d",&var);
    printf("\nLa direccion de memoria del puntero es: %d",&punt);
    printf("\nEl tamanio de memoria utilizado por la variable es: %d bytes",sizeof(var));
    return 0;
}