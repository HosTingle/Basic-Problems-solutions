#include<stdio.h>
#include<string.h>
void deg(int *n,int *p){
	int kal;
	kal=*n;
	*n=*p;
	*p=kal;
}
// Program�n amac� ald���m�z de�erlerdeki en k���k farklar� bularak bunlar� elde eti�imiz de�erleri k���kden b�y�e do�ru yazd�rma
int main(){
	int a,c,i,sum=0,enkucuk=1000,x,y[100001],mal,diz[100001];
	scanf("%d",&a);
	for(i=0;i<a;i++)
	scanf("%d",&diz[i]);
	//De�erleri kullan�c�dan al�yoruz
	for(i=0;i<a;i++){
		for(c=i+1;c<a;c++){
			// d�ng�ler ile dizi i�inde geziyoruz
			if(diz[i]-diz[c]<0)
			x=(-1)*(diz[i]-diz[c]); //say� eksi ise art�ya �eviriyoruz fark� bulabilmek i�in
			else
			x=diz[i]-diz[c];
			if(enkucuk>=x){
		    if(enkucuk!=x){
		    sum=0;//E�er yeni bir deger bulur ise onu diziye deger atamay� yeniden ba�lat�yoruz
			}
			enkucuk=x;
			y[sum]=diz[i];
			sum++;
			y[sum]=diz[c];
			sum++;
			//Diziye de�erleri at�yoruz rastgele bi�imde
	        }
		}
	}
	
	if(sum>a)//Hangi deger buyuk ise ona g�re dizi boyutu belirliyoruz 
    mal=sum;
	else
    mal=a;
    for(i=0;i<sum;i++){
    for(c=i+1;c<sum;c++){
    if(y[i]>y[c])
    deg(&y[i],&y[c]);
    // Diziyi s�ralama algoritmas� ile k���kden b�y��e do�ru s�ral�yoruz
    }
    }
	for(i=0;i<mal;i++){
		if(y[i]!=0)
		printf("%d ",y[i]);
		//s�f�rlar d���nda kalan de�erleri yazd�r�yoruz
	}
}
