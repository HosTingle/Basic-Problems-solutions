#include<iostream>
using namespace std;
int main(){
	long long a,b,c,d;
	cin>>d;
	while(d--){
	cin>>a;
	cin>>b;
	cin>>c;
	c=(((b%a)+(c-1))%a);
	if(c!=0){
	cout<<c<<endl;
	}
	else{
		cout<<a<<endl;
	}
}
}
