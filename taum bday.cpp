#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	while(z--){
	cin>>a>>b>>c>>d>>e;
	if(a*c+b*d>a*c+b*c+b*e){
		cout<<a*c+b*c+b*e<<endl;
	}
	else if(a*c+b*d>b*d+a*d+a*e){
		cout<<b*d+a*d+a*e<<endl;
	}
	else{
	cout<<a*c + b*d<<endl;
	}
}
}
