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

int main ( void ) {
    char questao1, questao2, questao3, gabarito1, gabarito2, gabarito3;
    
    printf("Digite a resposta da primeira questao: ");
    do {
        scanf("%c", &questao1);
    } while(questao1 == '\n');
    
    printf("Digite a resposta da segunda questao: ");
    do {
        scanf("%c", &questao2);
    } while(questao2 == '\n');
    
    printf("Digite a resposta da terceira questao: ");
    do {
        scanf("%c", &questao3);
    } while(questao3 == '\n');
    
    
    printf("Digite a resposta do primeiro do gabarito: ");
    do {
        scanf("%c", &gabarito1);
    } while(gabarito1 == '\n');
    
    printf("Digite a resposta do segundo do gabarito: ");
    do {
        scanf("%c", &gabarito2);
    } while(gabarito2 == '\n');
    
    printf("Digite a resposta da terceira do gabarito: ");
    do {
        scanf("%c", &gabarito3);
    } while(gabarito3 == '\n');
    
    compare(questao1, questao2, questao3, gabarito1, gabarito2, gabarito3);
};