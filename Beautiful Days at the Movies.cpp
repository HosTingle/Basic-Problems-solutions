#include<iostream>
using namespace std;
int main(){
	int a,b,c=0,d,e,tersayi=0,sayma=0,k,temp=0,l;
	cin >>a>>b>>k;
	
	while(a<=b){
	tersayi=0;
	l=a;
	temp=a;
	while(l>0){
		c=l%10;
		tersayi=tersayi*10+c;
		l=l/10;
	}
	if((temp-tersayi)%k==0){
		sayma++;
    }
    a++;
}
	cout << sayma<<endl;
	
	
	
}
