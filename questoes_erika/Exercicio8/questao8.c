#include <stdio.h>
#include <string.h>

int main()
{
    char sigla[2];
    
    printf("Informe a sigla do seu Estado: ");
    scanf("%s",sigla);
    strlwr(sigla);
    
    if(sigla[1]=='m'){
        printf("Amazonense");
    }else if(sigla[1] == 'j'){
        printf("Carioca");
    }else if(sigla[1] == 'a'){
        printf("Paraense");
    }else if(sigla[1] == 'c'){
        printf("Acreano");
    }
    
    return 0;
}
