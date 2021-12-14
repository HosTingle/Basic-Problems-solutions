#include<iostream>
using namespace std;
int main(){
	int a,b,c,e,say=0,z=0;
	long d;
	cin>> a;
	cin >>b;
	cin >>c;
	cin>>d;
	while(z<d && d-z>=c && d-a>z){
		if(a==c){
			say++;
			z+=a;
		}
		else if(a-c<b){
			z+=a;
			a=c;
			say++;
		}
		else{
		z+=a;
		a=a-b;
		say++;
	    }
		
	
}
cout <<say<<endl;
}
