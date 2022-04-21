#include<stdio.h>
#include<string.h>
void deg(int *n,int *p){
	int kal;
	kal=*n;
	*n=*p;
	*p=kal;
}
// Programýn amacý aldýðýmýz deðerlerdeki en küçük farklarý bularak bunlarý elde etiðimiz deðerleri küçükden büyüe doðru yazdýrma
int main(){
	int a,c,i,sum=0,enkucuk=1000,x,y[100001],mal,diz[100001];
	scanf("%d",&a);
	for(i=0;i<a;i++)
	scanf("%d",&diz[i]);
	//Deðerleri kullanýcýdan alýyoruz
	for(i=0;i<a;i++){
		for(c=i+1;c<a;c++){
			// döngüler ile dizi içinde geziyoruz
			if(diz[i]-diz[c]<0)
			x=(-1)*(diz[i]-diz[c]); //sayý eksi ise artýya çeviriyoruz farký bulabilmek için
			else
			x=diz[i]-diz[c];
			if(enkucuk>=x){
		    if(enkucuk!=x){
		    sum=0;//Eðer yeni bir deger bulur ise onu diziye deger atamayý yeniden baþlatýyoruz
			}
			enkucuk=x;
			y[sum]=diz[i];
			sum++;
			y[sum]=diz[c];
			sum++;
			//Diziye deðerleri atýyoruz rastgele biçimde
	        }
		}
	}
	
	if(sum>a)//Hangi deger buyuk ise ona göre dizi boyutu belirliyoruz 
    mal=sum;
	else
    mal=a;
    for(i=0;i<sum;i++){
    for(c=i+1;c<sum;c++){
    if(y[i]>y[c])
    deg(&y[i],&y[c]);
    // Diziyi sýralama algoritmasý ile küçükden büyüðe doðru sýralýyoruz
    }
    }
	for(i=0;i<mal;i++){
		if(y[i]!=0)
		printf("%d ",y[i]);
		//sýfýrlar dýþýnda kalan deðerleri yazdýrýyoruz
	}
}
