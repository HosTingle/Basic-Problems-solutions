#include<iostream>
using namespace std;
int z[100];
int main(){
	int a,c,i=0,temp,k,cemp;
	cin >>k;
	cemp=k;

	while(k!=0){
	k--;
	cin >> a;
	temp=a;
	while(a>0){
		c=a%10;
		if(c==0){
			
		}
		else if(temp%c==0){
			z[k]++;
		}
		a=a/10;
	}
}
	for(i=cemp-1;i>=0;i--){
	
	cout <<z[i]<<endl;
}
}
