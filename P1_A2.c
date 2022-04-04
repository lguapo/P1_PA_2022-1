#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
nova proposta: estavamos complicando demais, cada vez adicionando novos recursos e comandos sem total ciência 
de suas aplicações e propriedades, agora mudamos a abordagem para algo o mais simples e funcional possivel
*/
static char palavra[51];

int letras(){

    int cmp;
    char alfbt[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
    'o','p','q','r','s','t','u','v','w','x','y','z'};

    printf('digite a palavra desejada:\n');
    scanf("%c", palavra);

    for(int ii=0;ii<51;ii++){
        for(int jj=0;jj<26;jj++){
            cmp = strcmp(palavra[ii],alfbt[jj]);

            if(cmp == 0){
                switch(jj){
                    //tecla 2: a,b,c
                    case 0: printf("#1=2\n");break;
                    case 1: printf("#2=2\n");break;
                    case 2: printf("#3=2\n");break;
                    //tecla 3: d,e,f
                    case 3: printf("#1=3\n");break;
                    case 4: printf("#2=3\n");break;
                    case 5: printf("#3=3\n");break;
                    //tecla 4: g,h,i
                    case 6: printf("#1=4\n");break;
                    case 7: printf("#2=4\n");break;
                    case 8: printf("#3=4\n");break;
                    //tecla 5: j,k,l
                    case 9: printf("#1=5\n");break;
                    case 10: printf("#2=5\n");break;
                    case 11: printf("#3=5\n");break;
                    //tecla 6: m,n,o
                    case 12: printf("#1=6\n");break;
                    case 13: printf("#2=6\n");break;
                    case 14: printf("#3=6\n");break;
                    //tecla 7: p,q,r,s
                    case 15: printf("#1=7\n");break;
                    case 16: printf("#2=7\n");break;
                    case 17: printf("#3=7\n");break;
                    case 18: printf("#4=7\n");break;
                    //tecla 8: t,u,v
                    case 19: printf("#1=8\n");break;
                    case 20: printf("#2=8\n");break;
                    case 21: printf("#3=8\n");break;
                    //tecla 9: w,x,y,z
                    case 22: printf("#1=9\n");break;
                    case 23: printf("#2=9\n");break;
                    case 24: printf("#3=9\n");break;
                    case 25: printf("#4=9\n");break;

                    default: printf("error! tente novamente\n");
                }
                //resetar contador toda vez que encontrar a letra
                jj = 0;
            }
        }
    }

    return (cmp);
}

int main(void){

    letras();

    system("pause");
    return 0;
}