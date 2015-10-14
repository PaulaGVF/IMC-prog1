#include <stdio.h>
#include<stdlib.h>


int main() {
	int p;
	float a, IMC;
	
	printf("Digite seu peso:\n");
	scanf("%d",&p);
	
	
	printf("Digite sua altura:\n");
	scanf("%f",&a);

	IMC= p/(a*a);
		if (IMC<=19)
			printf("\n Voce esta abaixo do peso ideal\n");
		else if ((IMC>=20 )&& (IMC<=25))
				printf("\n Voce esta no peso ideal.\n");			
			else if ((IMC>=26 )&& (IMC<=30))
       	 			printf("\n Voce esta acima do peso ideal. \n");	
				else if (IMC>=31)
					 printf("\n Seu indice indica obesidade\n Sua saude esta em risco\n Procure um medico\n");
		 		
				system("pause");
				return 0;
	
	
	

	
}
