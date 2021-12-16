#include<iostream>
using namespace std;
int main(){
	long long a,b,c=1,say=0,lay=0;
	cin >>a;
	cin>>b;
	while(c<b){
	say++;
	c=c+2;
	}
	while(b<a){
	if((a-b)==1 && b%2==0){
	break;
	}
	else
		a=a-2;
		lay++;
		
	}	
	if(say>lay){
		cout <<lay<<endl;
	}
	else
	cout << say<<endl;
}
