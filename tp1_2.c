#include <stdio.h>
int alCuadrado(int num1);
void potencia (int *num1);
void mostrarDireccYCont(int *pnum2);
void invertir( int* priN, int *segN);
void ordenar( int* priN, int *segN);
int main (){

    int num = 5; 
    int *num1 = &num;
    int num2 = 21;
    int *pnum2 = &num2;
    int *pPriN, *pSegN;
    int priN= 0, segN= 0; 
    pPriN = &priN;
    pSegN = &segN;

          


    /*punto 4a*/
    printf("el cuadrado del numero %d es de %d \n", num, alCuadrado(num));

        
        /*punto 4b*/
    potencia(num1);
     printf("el cuadrado con la Fn void es de %d \n",  *num1);

        /*punto 4c*/
    mostrarDireccYCont(pnum2);

      /*punto 4d*/

      printf("Ingrese un primer numero \n");
    scanf("%d", &priN); 
    fflush(stdin); 
     printf("Ingrese un segundo numero \n");
    scanf("%d", &segN); 
    fflush(stdin); 

    invertir(pPriN, pSegN);
    /*muestro las variables invertidas */
         printf("el primer numero que ingreso es  %d \n",  segN);
          printf("el segundo numero que ingreso es  %d \n",  priN);

      /*punto 4e*/

      printf("Ingrese un primer valor numerico \n");
    scanf("%d", &priN); 
    fflush(stdin); 
     printf("Ingrese un segundo valor numerico  \n");
    scanf("%d", &segN); 
    fflush(stdin); 

    ordenar(pPriN, pSegN);
    /*muestro las variables ordenadas de menor a mayor */
         printf("el valor menor es %d \n",  priN);
          printf("el valor mayor es  %d \n",  segN);      



    return 0;
}
/*punto 4f*/
void ordenar( int* priN, int *segN){
    int aux = 0;  
    if ((*priN)> (*segN))
    {
        aux = *priN; 
        *priN = *segN;
        *segN = aux;

    }
    
}

/*punto 4d*/
void invertir( int *pPriN, int *pSegN){
    int aux = 0; 
    aux = *pPriN;
    *pPriN = *pSegN;
    *pSegN = aux;
}
    
/*punto 4c*/
void mostrarDireccYCont(int *pnum2){
    printf("la direccion de memoria de la variable es de %d \n", pnum2);
    printf("el contenido de la variable es de %d \n", *pnum2 );
}

    /*punto 4b*/
void potencia (int *num1){
    *num1 = (*num1) * (*num1);
}
    
    /*punto 4a*/
int alCuadrado(int num1){
    return num1*num1;
}