#include<iostream>
using namespace std;
int main(){
	int a,b,c[100],d,e,say;
	cin>>e;
	while(e--){
	cin>>a;
	cin>>b;
	say=0;
	for(int i=0;i<a;i++){
		cin>>c[i];
		
		if(c[i]<=0){
		say++;
		}
	}
	if(say>=b){
	cout<<"NO"<<endl;
	}
	else{
	cout<<"YES"<<endl;
	}
}
}
