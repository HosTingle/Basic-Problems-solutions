#include<iostream>
#include<math.h>
using namespace std;
int bin(int a){
	if(a==0){
		return 0;
	}
	else 
    return a%2 +bin(a/2)*10;
	
}
int dec(int b){
	int c=0,n=0,z=0;
	if(b==1){
		return 1;
	}
	else
	while(b!=0){
	c=b%10;
	b=b/10;
	z+=c*pow(2,n);
	n++;  
}
return z;
}

int main(){
	int z,y,t;
	cout <<" Ilk binary degeri giriniz:";
	cin >> z;
	cout <<" Ikinci binary degeri giriniz:";
	cin >> y;
	t=dec(y)+dec(z);
	cout <<" Degerler toplami:";
	cout << bin(t);
	


	
	
}
