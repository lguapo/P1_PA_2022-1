#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//nova ideia: ficaria mais limpo se enumerasse por tecla ao invés de letra. 
typedef (enum){
    t2=2,
    t3,
    t4,
    t5,
    t6,
    t7,
    t8,
    t9
}tecla;

int teclas(){
    //criar contadores de cada tecla
    int ( i, cont2, cont3, cont4, cont5, cont6, cont7, cont8, cont9 ) = (0,0,0,0,0,0,0,0,0);
    char palavra[50];

    printf("digite a palavra %c\n",palavra);
    scanf("%c",&palavra);

    //garantir que a palavra esta limitada a 50 caracteres.
    if(palavra[i]<=(i=50)){

    }
    

}