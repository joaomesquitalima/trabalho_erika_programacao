#include <stdio.h>

int main() {
    int maior = 0, n = 0, i = 0, idade[n], mulheres = 0, deninter = 0, olho, cabelo;
    char sexo;
    float percentual;
    

    while (5 > 2) {
        printf("Informe o sexo [m/f]: ");
        scanf(" %c", &sexo);
        printf("Informe a cor dos olhos [1-azuis/2-verdes/3-castanhos]: ");
        scanf("%d", &olho);
        printf("Informe a cor do cabelo [1-louro/2-castanho/3-pretos]: ");
        scanf("%d", &cabelo);
        printf("Informe sua idade: ");
        scanf("%d", &idade[i]);

        if (sexo == 'F' || sexo == 'f') {
            mulheres++;

            if (idade[i] >= 18 && idade[i] <= 35) {
                if (olho == 2 && cabelo == 1) {
                    deninter++;
                }
            }
        }

        if (idade[i] == -1) {
            break;
        }

        if (idade[i] > maior) {
            maior = idade[i];
        }

        
    }
    
    if(mulheres !=0){
    	percentual = (float)deninter / mulheres * 100;
    	
	}

    

    printf("\nMaior idade: %d\n", maior);
    printf("Quantidade de mulheres entre 18 e 35 anos, com olhos verdes e cabelos louros: %d\n", deninter);
    printf("Percentual: %.2f%%\n", percentual);

    return 0;
}

