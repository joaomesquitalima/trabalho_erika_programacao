#include <stdio.h>
#include <string.h>

int main()
{
    char sigla[2];
    
    printf("Informe a sigla do seu Estado: ");
    scanf("%s",sigla);
    strlwr(sigla);
    
    if(strcmp(sigla,"am")==0){
        printf("Amazonense");
    }else if(strcmp(sigla,"rj")==0){
        printf("Carioca");
    }else if(strcmp(sigla,"pa")==0){
        printf("Paraense");
    }else if(strcmp(sigla,"ac")==0){
        printf("Acreano");
    }
    
    return 0;
}
