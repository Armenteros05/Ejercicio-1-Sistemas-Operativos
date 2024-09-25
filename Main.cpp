#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

/* rellena el array asignando a cada posicion el valor de su indice */
void rellenarArray(int arr[]);

/* modifica la posicion pos del array arr con el valor especificado en
valor */
void modificarPosArray(int arr[], int pos, int valor);

/* muestra tantos elementos del array apuntado p como especifique el
parametro cuantos */
void mostrarArray(int *p, int cuantos);

int main(){
    int arrInt[10];
    int i=0;

    rellenarArray(arrInt);
    mostrarArray(arrInt, SIZE); //se muestra el array rellenado
    for(i=0; i<SIZE/2; i++){ // se rellena la primera mitad del array con el valor -1
        modificarPosArray(arrInt, i, -1);
    }
    mostrarArray(arrInt, SIZE); //muestra el array completo con –1 en la prim. mitad
    mostrarArray(&arrInt[SIZE/2], SIZE/2);//muestra solo la segunda mitad del array
}

void rellenarArray(int arr[]){
    int i=0;
    for(;i<SIZE;i++){
        arr[i]=i;
        /*
        *arr=i;
        arr++;  Otra forma de hacer la asignación
        */
    }
}

void modificarPosArray(int arr[], int pos, int valor){
    if(pos>=0 && pos<SIZE)
        arr[pos]=valor;
}

void mostrarArray(int *p, int cuantos){
    int i;
    for(i=0; i<cuantos; i++){
        printf("%d ", *p++);
        //printf("%d ", *(p+i)); Otra manera de escribir la sentencia
        //printf("%d ", p[i]);   Otra manera de escribir la sentencia
    }
    printf("\n");
}