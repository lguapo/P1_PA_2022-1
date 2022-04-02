#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//nova ideia: ficaria mais limpo se enumerasse por tecla ao invés de letra. 
typedef enum{
    //isso é a tecla2
    a=1,b,c,
    //essa é a tecla 3
    d=1,e,f,
    //essa é a tecla....
    g=1,h,i,
    j=1,k,l,
    m=1,n,o,
    p=1,q,r,s,
    t=1,u,v,
    w=1,x,y,z

}letras;
// porque assim a ja sai como valor 1, b como 2 e c como 3
//que é o numero de vezes que a pessoa tem q apertar a tecla sacou??
char palavra[50];

int word(){

    printf("digite a palavra\n");
    scanf("%c",&palavra);

    system("pause");
    return (palavra);
}

int main(){

    word();

    return 0;
}