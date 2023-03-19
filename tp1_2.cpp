#include <stdio.h>

int cuadrado(int num){
   return (num*num);
}
void cuadrado2(int num){
    printf("\nEl cuadrado del numero %d es %d",num,num*num);
}
void infoVariable(int *var){
    printf("\nLa direccion de la variable es: %d",var);
    printf("\nEl contenido de la variable es: %d",*var);
}
void invertir(int  *a,int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
void orden(int *a,int *b){
    int aux;
    if (*a>*b)
    {
        invertir(a,b);
    }
    
}
int main(){
    int num1,num2;
    printf("Ingrese el primer numero");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero");
    scanf("%d",&num2);
    orden(&num1,&num2);
    infoVariable(&num1);
    infoVariable(&num2);
    return 0;
}