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
		m=strlen(dizi);//Her seferinde tekrar hesaplanmasi i�in top de�eri sifirlanir ve m de�erine dizi boyutu at�l�r
		for(c=0;c<m/2;c++){
		if(dizi[c]!=dizi[m-c-1]){//Farkli ise dizi ko�ula girer ve ASCII farklar� al�narak azalt�lmas� gereken de�er bulunur
			if((int)dizi[m-c-1]-(int)dizi[c]>0)//De�erin art� kalmas� i�in hangi fark�n art� oldu�u kontrol edilir
			top+=(int)dizi[m-c-1]-(int)dizi[c];
			else
			top+=(int)dizi[c]-(int)dizi[m-c-1];
		}
	    }
	    printf("%d\n",top);//En son de�er yazd�r�l�r ve e�er var ise yeni string i�in for d�ng�s� yeniden ba�lat�r�l�r
	}
}
