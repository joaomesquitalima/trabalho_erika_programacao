#include <stdio.h>
int main()
{
   char nome[100];
   int idade;
   
   printf("Digite o nome do usuario: ");
   fgets(nome, sizeof(nome), stdin);
   
   strtok(nome, "\n"); // remove o \n da string nome
    
   printf("Digite a idade: ");
   scanf("%d", &idade);
   printf("%s tem %i anos", nome, idade);
   
   return 0;
}

