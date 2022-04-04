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

char palavra[51];

void word(){

    int cmp;
    letras letra;

    printf("digite a palavra\n");
    scanf("%s",&palavra);

 //loop for para comparação de caracteres com nosso enumerado "letras"
    for(int ii=0;ii<50;ii++){
        for(int jj=0;jj<letras;jj++){

           cmp= strcmp(palavra[ii],letras[jj]);

           if(cmp == 0){

               switch(letra){
                   //tecla 2
                   case a: printf("%d = 2\n",a);
                   case b: printf("%d = 2\n",b);
                   case c: printf("%d = 2\n",c);
                   //tecla 3
                   case d: printf("%d = 3\n",d);
                   case e: printf("%d = 3\n",e);
                   case f: printf("%d = 3\n",f);
                   //tecla 4 
                   case g: printf("%d = 4\n",g);
                   case h: printf("%d = 4\n",h);
                   case i: printf("%d = 4\n",i);
                   //tecla 5 
                   case j: printf("%d = 5\n",j);
                   case k: printf("%d = 5\n",k);
                   case l: printf("%d = 5\n",l);
                   //tecla 6
                   case m: printf("%d = 6\n",m);
                   case n: printf("%d = 6\n",n);
                   case o: printf("%d = 6\n",o);
                   //tecla 7
                   case p: printf("%d = 7\n",p);
                   case q: printf("%d = 7\n",q);
                   case r: printf("%d = 7\n",r);
                   case s: printf("%d = 7\n",s);
                   //tecla 8
                   case t: printf("%d = 8\n",t);
                   case u: printf("%d = 8\n",u);
                   case v: printf("%d = 8\n",v);
                   //tecla 9
                   case w: printf("%d = 9\n",w);
                   case x: printf("%d = 9\n",x);
                   case y: printf("%d = 9\n",y);
                   case z: printf("%d = 9\n",z);break;
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