#include <stdio.h>
#include <stdlib.h>



void menu() {
	int a;
	printf("1-Oyuna Basla <1> \n");
	printf("2-Oyunu Bitir <-1> \n");
	printf("Secim Gir: \n");
	scanf("%d",&a);
	while(a != 1 && a != -1){
		printf("Lutfen Dogru Secimi Giriniz: \n");
		scanf("%d",&a);
	}
	if(a==-1)
	   exit (1);
	else if(a==1){
		oyun();
	}
}

int oyun(){
	int sayi=77;
	int tahmin;
	printf("Tahmininiz: \n");
	scanf("%d",&tahmin);
	while(tahmin!=sayi){
		if(sayi<tahmin){		
		printf("Daha Kucuk Tahmin Yap: \n");
		scanf("%d",&tahmin);
	}
	else{
		printf("Daha Buyuk Tahmin Yap: \n");
		scanf("%d",&tahmin);
	}
}
	if(sayi==tahmin){
	
	  printf("Tebrikler Bildiniz !\n");
	  menu();
}
}

int main(){
	menu();		
    return 0;
}
