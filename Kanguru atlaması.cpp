#include<iostream>
using namespace std;
bool atlamakar(int konuma,int a,int konumb,int b){
	int c=0;
	while(konuma!=konumb){
	konuma+=a;
	konumb+=b;
	c++;
	if(c>10000){
	return false;
	}
    } 	
	return true;
}
int main(){
	int n,m,b,v;
	bool a;
	cin >>n>>m>>b>>v;
	a =atlamakar(n,m,b,v);
	if(a==true){
	
		cout <<"YES"<<endl;
	}
	else
	cout <<"NO"<<endl;
	
}
