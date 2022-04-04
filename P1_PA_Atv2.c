#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//nova ideia: ficaria mais limpo se enumerasse por tecla ao invés de letra. 
typedef enum{
    
    a=1,b,c,
    d=1,e,f,
    g=1,h,i,
    j=1,k,l,
    m=1,n,o,
    p=1,q,r,s,
    t=1,u,v,
    w=1,x,y,z

}letras;
// porque assim a ja sai como valor 1, b como 2 e c como 3
//que é o numero de vezes que a pessoa tem q apertar a tecla sacou??

static char palavra[51];


void word(){

    char alfab[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int cmp;
    letras letra;

    printf("digite a palavra\n");
    scanf("%s",&palavra);

 //loop for para comparação de caracteres da palavra com o alfabeto
    for(int ii=0;ii<50;ii++){
        for(int jj=0;jj<27;jj++){

           cmp= strcmp(palavra[ii],alfab[jj]);
            /*strcmp:
                =0 se caracteres forem iguais
            */
           if(cmp == 0){

               switch(alfab[jj]){

                   case alfab[0]: printf("%d = 2\n")
               }
           } 

        }
    }

}

int main(){

    word();

    system ("pause");
    return 0;
}