#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int codigo, opcao;

printf ("|Menu da loja|");
printf("Produtos: \n 1 - Conjunto de chinelos, c�digo: 3 \n 2 - Conjunto de cal�as, c�digo: 4 \n 3 - Conjunto de camisas, c�digo: 5 \n ");

do
{
    printf("Digite o codigo da compra:");
    scanf("%d", &codigo);

switch (codigo)
{
 case 3:
 printf("Produto: Conjunto de chinelos \n Valor: 25.00 \n codigo: 3 \n Quantidade: 6 pares \n");
 break;

 case 4:
 printf("Produto: Conjunto de cal�as \n Valor: 55.00 \n codigo: 4 \n Quantidade: 5 pe�as");
 break;

 case 5:
 printf("Produto: Cojunto de camisas \n Valor: 88.00 \n codigo:5 \n Quantidade: 12 pe�as");
 break;
}
printf("\n Digite 1 para mais uma compra: \n");

printf("\n Desja fazer mais alguma compra? \n");
scanf("%d", &opcao);

} while (opcao = 1);
{
    printf("Digite o codigo da compra:");
    scanf("%d", &codigo);

}while (opcao != 1)



    return 0;
}