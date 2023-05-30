#include <iostream>
#include <string.h>

int main()
{
   char opcao_lida[2];
   char nome[50] ="";

   while (strcmp(opcao_lida,"3") != 0){
        printf("Menu: \n 1 - Ler nome\n 2 - Imprimir nome\n 3 - sair\n");
        scanf("%s",opcao_lida);
        if (strcmp(opcao_lida,"1") == 0 ) {
            printf("Digite o nome: ");
            scanf("%s",nome);
            printf("O nome armazenado foi: %s \n", nome);
        }
        if (strcmp(opcao_lida,"2") == 0 ) {
            if (strcmp(nome, "") ==0 )
                printf("Nome nao lido ainda \n");
            else
                printf("O nome armazenado foi: %s \n", nome);
        }
   }


}
