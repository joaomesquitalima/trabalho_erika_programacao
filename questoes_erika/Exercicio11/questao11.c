#include <stdio.h>

int main(){
    int a1,a2,i,k=0;
    
    printf("Insira o primeiro termo da sequencia:");
    scanf("%d",&a1);
    printf("Insira o segundo termo da sequencia:");
    scanf("%d",&a2);
    
    
    for(i = 3; i < 11;i++){
    	
    	if(i%2 == 0){
    		k = a1 - a2;
    		
		}
		else{
			k = a1 + a2;
		}
    	
    	a1 = a2;
    	a2 = k;
    	printf("%d\n",k);
	}
    
    
    
    return 0;
}





//#include <stdio.h>
//
//int main(){
//    int a1,a2,i,k=0,j=3;
//    int fetu[10];
//    printf("Insira o primeiro termo da sequencia:");
//    scanf("%d",&a1);
//    printf("Insira o segundo termo da sequencia:");
//    scanf("%d",&a2);
//    
//    fetu[0] = a1;
//    fetu[1] = a2;
//
//    printf("%d\n%d\n",a1,a2);
//
//    for (i=2;i<10;i++){
//
//        if((j%2)==0){
//            fetu[i] = fetu[k]-fetu[k+1];
//            printf("%d\n",fetu[i]);
//        }else{
//            fetu[i] = fetu[k]+fetu[k+1];
//            printf("%d\n",fetu[i]);
//        }
//
//        j++;
//        k++;
//    }
//    
//    return 0;
//}


