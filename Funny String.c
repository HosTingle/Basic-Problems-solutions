#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c,d,i,k=0,o=0,y,z=0;
    char diz[20000],*p,yen[20000],ten[20000];
    scanf("%d",&a);
    while(a--){
        scanf("%s",&diz);
        p=diz; //ASCII de�erlerin hesaplamak i�in diziyi pointera at�yoruz
        k=0;
        o=0;
        z=0;
        //De�erleri s�f�rl�yoruz
        for(i=0;i<strlen(diz)-1;i++){
        	// Dizinin i�inde dola�arak de�erleri hesapl�yoruz
            if(p[i]-p[i+1]<0){
            yen[k]=(p[i]-p[i+1])*-1;//E�er de�er eksi ise eksi ile �arparak art�ya �eviriyoruz ve yeni dizi at�yoruz
            k++;
            }
            else{
            yen[k]=(p[i]-p[i+1]);
            k++; //Yeni dizi at�yoruz
            }
        }
        for(c=strlen(diz)-1;c>0;c--){
        	//Yapt���m�z i�lemleri tekrar yapy�yoruz ama bu sefer tersten
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
        if(ten[y]==yen[z]){//E�er e�it ise z de�erini art�yoruz bu �ekilde boyutlar�n dizilerin birbirine e�it olup olamd���n� buluyoruz
        z++;
        }    
        }
        if(z==o)
        printf("Funny\n");
        else
        printf("Not Funny\n");
        //E�er e�it ise Funny cevap Funny ��k�yor de�il ise Not Funny 
    }
}

