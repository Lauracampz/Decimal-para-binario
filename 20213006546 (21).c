#include <stdio.h>

void dec2bin(int dec);
int main(){
	int dec;
	printf("Digite um numero inteiro: ");
	scanf("%i",&dec);
	printf("Resultado: ");
	dec2bin(dec);

}

void dec2bin(int dec){
	int num;
	if(dec/2==0){
		printf("%i",dec%2);
	}
  	else{
			
		
		num=dec/2;	
		dec2bin(num);
		printf("%i",dec%2);

	}


	

}
