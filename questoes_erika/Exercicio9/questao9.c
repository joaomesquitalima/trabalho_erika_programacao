#include <stdio.h>

int main(){
//	informar quantas gotas do medicamento o paciente deve tomar por dose

	float idade, peso, gotas;
	
	printf("Informe a idade do paciente: ");
	scanf("%f", &idade);
	
	printf("Informe o peso do paciente: ");
	scanf("%f", &peso);
	
	printf("-----------------------------------------------------------\n");
	

	
	if(idade >= 12 && peso >= 60){
		gotas = (1000 / 500)*20;
		
		printf("O paciente deve tomar %.1f gotas do medicamento.\n",gotas);
		
		
	}
	else if(idade >= 12 && peso < 60){
		gotas = (875 / 500)*20;
		printf("O paciente deve tomar %.1f gotas do medicamento.\n",gotas);
	}
	else if(idade <12){
		if(peso >= 5 && peso <= 9){
			gotas = (125 / 500)*20;
			printf("O paciente deve tomar %.1f gotas do medicamento.\n",gotas);
			
		}
		else if(peso >= 9.1 && peso <= 16){
			gotas = (250 / 500)*20;
			printf("O paciente deve tomar %.1f gotas do medicamento.\n",gotas);
			
		}
		else if(peso >= 16.1 && peso <= 24){
			gotas = (375 / 500)*20;
			printf("O paciente deve tomar %.1f gotas do medicamento.\n",gotas);
			
		}
		else if(peso >= 24.1 && peso <= 30){
			gotas = (500 / 500)*20;
			printf("O paciente deve tomar %.1f gotas do medicamento.\n",gotas);
			
		}
		else if(peso > 30){
			gotas = (750 / 500)*20;
			printf("O paciente deve tomar %.1f gotas do medicamento.\n",gotas);
			
		}
	}
	

	
	return 0;
}

