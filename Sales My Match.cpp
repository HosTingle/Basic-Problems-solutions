#include<iostream>
using namespace std;
int a[100];
int main(){
	int x,m,cift=0;
	cin >>x;
	for(int i=0;i<x;i++){
		cin>>m;
		a[m]++;
		if(a[m]%2==0){
			cift++;
		} 
	}
	cout << cift<<endl;

	
}
