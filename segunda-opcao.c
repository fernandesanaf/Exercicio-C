#include <stdio.h>
#include <string.h>

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

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
    clear_keyboard_buffer();
    //questao1 = getchar();
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 2:"); // este comando não responde
    scanf("%c",&questao2);
    clear_keyboard_buffer();
    //questao2 = getchar();
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 3:");
    scanf("%c",&questao3);
    clear_keyboard_buffer();
    
    
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 1 DO GABARITO:"); // este comando não responde
    scanf("%c",&gabarito1);
    clear_keyboard_buffer();
    //gabarito1 = getchar();
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 2 DO GABARITO:");
    //
    scanf("%c",&gabarito2);
    clear_keyboard_buffer();
    //gabarito2 = getchar();
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 3 DO GABARITO:");// este comando não responde
    scanf("%c",&gabarito3);
    clear_keyboard_buffer();
    
    compare(questao1, questao2, questao3, gabarito1, gabarito2, gabarito3);
}