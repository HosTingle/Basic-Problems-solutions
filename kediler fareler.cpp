#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cin>>f;
	while(f--){
	cin>> a;
	cin>> b;
	cin>> c;
	if(c-a>0){
		d=c-a;
	}
	else if(a-c>0){
		d=a-c;
	}
	if(b-c>0){
		e=b-c;
	}
	else if(c-b){
		e=c-b;
	}
	if(e>d){
		cout<<"Cat A"<<endl;
	}
	else if(d>e){
		cout<<"Cat B"<<endl;
	}
	else{
		cout<<"Mouse C"<<endl;
	}
}
}
