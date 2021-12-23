#include<iostream>
using namespace std;
int z[100];
int main(){
	int a,b,c,d,i;
	cin>>a;
	z[0]=1;
	d=z[0];
	for(int i=1;i<60;i++){
		if(i%2==0){
		d=d+1;
		z[i]=d;
		}
		if(i%2!=0){
		d=d*2;
		z[i]=d;
		}
	}
	for(int i=0;i<a;i++){
		cin>>c;
		cout<<z[c]<<endl;
	}
}
