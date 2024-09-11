#include <stdio.h>

int main(){
    int nota1, nota2, nota3, nota4, resultado;
    printf("Digite a primeira nota do estudante:\n");
    scanf("%d",&nota1);
    
    printf("Digite a segunda nota do estudante:\n");
    scanf("%d",&nota2);

    printf("Digite a terceira nota do estudante:\n");
    scanf("%d",&nota3);

    printf("Digite a Quarta nota do estudante:\n");
    scanf("%d",&nota4);

    resultado = (nota1+nota2+nota3+nota4) / 4;

    if( resultado < 6 ){
    printf("você foi reprovado\n");

    }
    else
    {
        printf(" Foi Aprovado\n");
    
    }
    


        return 0;


}