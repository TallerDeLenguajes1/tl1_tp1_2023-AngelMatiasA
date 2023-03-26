#include <stdio.h> 

int main(){

/*Declare un puntero en el procedimiento principal que apunte a una
variable de algún tipo y muestre por pantalla lo siguiente:
El contenido del puntero
1) La dirección de memoria almacenada por el puntero.
2) la dirección de memoria de la variable.
3) la dirección de memoria del puntero.
4) el tamaño de memoria utilizado por esa variable usando la
función sizeof()
5) El contenido del puntero
6) La dirección de memoria almacenada por el puntero.
7) La dirección de memoria de la variable.
8) la dirección de memoria del puntero.
*/
    printf("hola mundo");
    int num1 = 0; 
    int *pNum = &num1; 

    printf(" \n el contenido del puntero es %d", *pNum);

    printf(" \n la direccion de memoria almacenada por el puntero es de %d", pNum);
    printf(" \n la direccion de memoria de la variable %d", &num1);
    printf(" \n la direccion de memoria del puntero es %d", &pNum);
    printf("\n el numero de bytes de la variable num1 es %d ", sizeof(num1));
    


    return 0;
}