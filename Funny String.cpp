#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c,d,i,k=0,o=0,y,z=0;
    char diz[20000],*p,yen[20000],ten[20000];
    scanf("%d",&a);
    while(a--){
        scanf("%s",&diz);
        p=diz; //ASCII deðerlerin hesaplamak için diziyi pointera atýyoruz
        k=0;
        o=0;
        z=0;
        //Deðerleri sýfýrlýyoruz
        for(i=0;i<strlen(diz)-1;i++){
        	// Dizinin içinde dolaþarak deðerleri hesaplýyoruz
            if(p[i]-p[i+1]<0){
            yen[k]=(p[i]-p[i+1])*-1;//Eðer deðer eksi ise eksi ile çarparak artýya çeviriyoruz ve yeni dizi atýyoruz
            k++;
            }
            else{
            yen[k]=(p[i]-p[i+1]);
            k++; //Yeni dizi atýyoruz
            }
        }
        for(c=strlen(diz)-1;c>0;c--){
        	//Yaptýðýmýz iþlemleri tekrar yapyýyoruz ama bu sefer tersten
            if(p[c-1]-p[c]<0){
            ten[o]=(p[c-1]-p[c])*-1;
            o++;
            }
            else{
            ten[o]=(p[c-1]-p[c]);
            o++;
            }
        }
        for(y=0;y<k;y++){
        if(ten[y]==yen[z]){//Eðer eþit ise z deðerini artýyoruz bu þekilde boyutlarýn dizilerin birbirine eþit olup olamdýðýný buluyoruz
        z++;
        }    
        }
        if(z==o)
        printf("Funny\n");
        else
        printf("Not Funny\n");
        //Eðer eþit ise Funny cevap Funny çýkýyor deðil ise Not Funny 
    }
}

