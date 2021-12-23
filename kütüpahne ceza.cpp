#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	if(c>f){
	cout<<10000<<endl;
	}
	else if(b>e && c==f){
	cout<<(b-e)*500<<endl;
	}
	else if(d>a && c==f && b==e){
	cout<<(a-d)*15<<endl;
	}
	else{
	cout<<0<<endl;
	}
}
