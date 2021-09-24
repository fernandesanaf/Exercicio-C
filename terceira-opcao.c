#include <stdio.h>

int compare ( char questao1, char questao2, char questao3, char gabarito1, char gabarito2, char gabarito3 ) {
    if (questao1 == gabarito1 ){
        printf("QUESTAO 1 ESTA CERTA! ");
    }
    else {
        printf("QUESTAO 1 ESTA ERRADA! "); 
    }
    
    if (questao2 == gabarito2){
        printf("QUESTAO 2 ESTA CERTA! ");
    }
    else{
        printf("QUESTAO 2 ESTA ERRADA! ");
    }
    
    if (questao3 == gabarito3){
        printf("QUESTAO 3 ESTA CERTA! ");
    }      
    else{
        printf("QUESTAO 3 ESTA ERRADA! ");
    }
}

int main(){
    char questao1, questao2, questao3, gabarito1, gabarito2, gabarito3;

    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 1:");
    //
    scanf("%c",&questao1);
    getchar();

    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 2:"); // este comando não responde
    scanf("%c",&questao2);
    getchar();

    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 3:");
    scanf("%c",&questao3);
    getchar();
    
    
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 1 DO GABARITO:"); // este comando não responde
    scanf("%c",&gabarito1);
    getchar();

    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 2 DO GABARITO:");
    scanf("%c",&gabarito2);
    getchar();

    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 3 DO GABARITO:");// este comando não responde
    scanf("%c",&gabarito3);
    getchar();

    compare(questao1, questao2, questao3, gabarito1, gabarito2, gabarito3);
}