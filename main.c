#include <stdio.h>

int main(void)
{
    int operacao;
    float n1,n2,r;
    
    printf("1=+\n");
    printf("2=-\n");
    printf("3=*\n");
    printf("4=/\n");
    printf("Digite o Tipo de operacao:\n");
    scanf("%i",&operacao);
    fflush(stdin);
    
    printf("Digite o Primeiro Numero\n");
    scanf("%f",&n1);
    fflush(stdin);
    
    printf("Digite o Segundo Numero\n");
    scanf("%f",&n2);
    fflush(stdin);
    

    

    
if (operacao==1){

    

r = n1 + n2;  

    printf("%f",r);


    
}

else{
    
    }
    
    if (operacao==2){

    

r = n1 - n2;  

    printf("%f",r);


    
}

else{
    
    }
    
        if (operacao==3){

    

r = n1 * n2;  

    printf("%f",r);


    
}

else{
    
    }
    
        if (operacao==4){

    

r = n1 / n2;  

    printf("%f",r);

}

else{
    
    }
    
    return 0;
}
