#include<iostream>
using namespace std;
int main(){
	int a[100],b[100],c,d,z;
	cin>>c;
	for(int i=1;i<=c;i++){
		cin>>a[i];
	}
	for(z=1;z<=c;z++){
	for(int i=1;i<=c;i++){
	if(z==a[a[i]]){
	b[z]=i;
	}
	}
	}
	for(int i=1;i<=c;i++){
		cout <<b[i]<<endl;
	}
	
	
	
}
