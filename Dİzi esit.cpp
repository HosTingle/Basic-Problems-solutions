#include<iostream>
using namespace std;
int b[100];
int main(){
	int a,x,enbuyuk=0;
	cin >>a;
	for(int i=0;i<a;i++){
		cin>>x;
		b[x]++;
		if(b[x]>enbuyuk){
			enbuyuk=b[x];
		}
	}
	cout <<a-enbuyuk<<endl;
	
}
