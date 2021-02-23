#include <stdio.h>

int main(){

// Este código no sirve para mucho. Vamos a hacer la serie de fibonacci

int F_0 = 0;
int F_1 = 1;
int i = 0; 
int F_2;

while (i<10){

    F_2 = F_1 + F_0;

    printf("\n La iteracion de Fibonacci %d tiene el valor %d \n", i, F_2);

    F_0 = F_1;
    F_1 = F_2;
    i = i+1;
}



return 0;
}