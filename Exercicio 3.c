#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main () {

setlocale(LC_ALL, "portuguese");

float i, j ;


printf("Voc� poder� digitar quantos n�meros quiser na sua lista telefonica \n");
    printf("\nAutomaticamente os n�meros ser�o salvos na lista telefonica \n");
        printf("Por�m ao digitar somente o n�mero 2, n�o poder� mais digitar \n \n");
            printf("Ao digitar os n�meros n�o use sinais");
        

 do
 {
    printf("Digite um n�mero para sua agenda telefonica");
    scanf("%f", &i);
    printf("\n Salvo na lista telefonica\n");

 } while (i > 2);
 printf("\n Os contatos que foram salvos est�o exibidos acima \n");
 
  
  
    return 0;
}