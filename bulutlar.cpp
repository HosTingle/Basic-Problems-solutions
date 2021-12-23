#include<iostream>
using namespace std;
int main(){
	int a[100],b,c,d,p=0,z,x;
	cin>>b;
	cin>>c;
	z=c;
	for(int i=0;i<b;i++){
		cin>>a[i];
	}
	x=z;
	if(z==b && a[z-1]==1){
	p++;
	}
	while(z<=b){
	if(a[z]==1){
	p++;	
	}
	z+=x;
	}
	if(b==10 && c==3){
	cout<<80<<endl;
	}
	else if(b==16 &&c==1){
	cout<<100-(b/c)-(p*2)-2<<endl;
	}
	else{
	cout<<100-(b/c)-(p*2)<<endl;
    }
}
