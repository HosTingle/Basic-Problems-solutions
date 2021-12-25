#include<iostream>
using namespace std;
int main(){
	char a[100],b[100];
	long long c=0,d,e,p=0,z,x,t=0,y=0,m;
	cin>>a;
	cin>>d;
	for(int i=0;a[i]!='\0';i++){
		c++;
		if('a'!=a[i]){
		p++;
		}
	}
	if(d%c!=0){
	m=d%c;
	while(t!=m){
	if(a[t]!='a'){
	y++;
	}
	t++;
	}
	}
	z=d/c;
	z=d-p*z;
	cout<<z-y<<endl;
}
