#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g[100],l[100],say=0,sayb=0;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;
	for(int i=0;i<e;i++){
		cin>>g[i];
		if(g[i]+c>=a && g[i]+c<=b){
			say++;
		}
	}
	for(int i=0;i<f;i++){
		cin>>l[i];
		if(l[i]+d>=a && l[i]+d<=b){
			sayb++;
		}
	}
	cout<< say<<endl;
	cout<<sayb<<endl;
	
}
