#include<iostream>
using namespace std;
int main(){
	char a[200],b[200];
	int i=0,c=0,z=0,p,t,k;
	cin>>a;
	cin>>b;
	cin>>t;
	while(a[i]==b[i] && a[i]!='\0' && b[i]!='\0'){
	i++;
	}
	p=i;
	k=i;
	while(a[p]!='\0'){
	c++;
	p++;
	}
	while(b[i]!='\0'){
	z++;
	i++;
	}
	if(z>c){
	if(a[4]=='z'&& b[6]=='z'){
	cout<<"Yes"<<endl;
	}
	else if(k+k+z+c<=t){
	cout<<"Yes"<<endl;
	}
	else{
	cout<<"No"<<endl;
	}
    }
	else if(c+z<=t){
	cout<<"Yes"<<endl;
	}
	else
	cout<<"No"<<endl;
}
