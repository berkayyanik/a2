#include <stdio.h>
#include <stdlib.h>

int main(){
	int ay;
	armut:
	printf("Kacinci ay: \n");
	scanf("%d",&ay);
	while(ay<1 || ay>12){
		printf("Hatali girdi, tekrar giriniz: \n");
		scanf("%d",&ay);
	}
	
	if(ay==2){	
	  printf("28 Gun \n");
	  }
	else if(ay>7){
		if(ay%2==0){
		
			printf("31 Gun \n");
	}
		else
		   printf("30 Gun \n");
	}
	else{
		if(ay%2==0){
			printf("30 Gun \n");
		}
		else
		    printf("31 Gun \n");
	}
     goto armut;
	return 0;
}
