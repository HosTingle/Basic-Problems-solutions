#include<stdio.h>
#include<string.h>
int main(){
	int i,a,c,top=0,m;
	char dizi[20000];
	scanf("%d",&a);
    //Dizi boyutu girilir
	for(i=0;i<a;i++){
		scanf("%s",dizi);
		top=0;
		m=strlen(dizi);//Her seferinde tekrar hesaplanmasi için top deðeri sifirlanir ve m deðerine dizi boyutu atýlýr
		for(c=0;c<m/2;c++){
		if(dizi[c]!=dizi[m-c-1]){//Farkli ise dizi koþula girer ve ASCII farklarý alýnarak azaltýlmasý gereken deðer bulunur
			if((int)dizi[m-c-1]-(int)dizi[c]>0)//Deðerin artý kalmasý için hangi farkýn artý olduðu kontrol edilir
			top+=(int)dizi[m-c-1]-(int)dizi[c];
			else
			top+=(int)dizi[c]-(int)dizi[m-c-1];
		}
	    }
	    printf("%d\n",top);//En son deðer yazdýrýlýr ve eðer var ise yeni string için for döngüsü yeniden baþlatýrýlýr
	}
}
