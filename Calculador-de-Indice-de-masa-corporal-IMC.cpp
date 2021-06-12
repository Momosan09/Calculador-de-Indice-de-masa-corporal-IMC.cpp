#include <stdio.h>
#include <conio.h>

float peso,alt, imc;

main(){
	printf	("\n  Ingrese su peso en Kg\n  ");
	 scanf	("%f", &peso);
	printf	("\n  Ingrese su altura en metros\n  ");
	scanf("%f", &alt);
	imc = peso / (alt * alt);
	printf ("\n  Su IMC es de " "%f",imc);
	
	if(imc < 18.5){
		printf(" y estas con peso inferior a lo normal");
	}
	else{
		
		if(imc > 18.6 && imc < 24.9 ){
		printf(" y su peso es el normal");
		}
		if( imc >= 25 && imc < 29.9 ){
		printf(" y su peso es superor a lo normal");
		}
		if( imc >= 30){
			printf(" y tiene obesidad");
		}

		else{
		printf(" end...");

	}
	}

	
	
	
	
	
	
	
}
