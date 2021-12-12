#include<iostream>
using namespace std;
int main(){
	int a[1000],b,c,d,e=0,say=0;
	cin >>b;
	cin >>c;
	for(int i=0;i<b;i++){
		cin >> a[i];
	}
	for(int i=0;i<b;i++){
		d=i+1;
		
		while(d!=b){
			e=0;
			e+=a[i]+a[d];
			if(e%c==0){
				say++;
			}
			d++;
			
		}
	}
	cout <<say;
}
