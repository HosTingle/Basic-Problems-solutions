#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,z;
	cin>>a;
	string x[a];
	for(int i=0;i<a;i++){
			cin>>x[i];
	}
	for(int i=1;i<a-1;i++){
		for(z=1;z<a-1;z++){
			if(x[i-1][z]<x[i][z] && x[i][z]>x[i+1][z] && x[i][z-1]<x[i][z] && x[i][z+1]<x[i][z]){
				x[i][z]='x';
			}
		}
	}
	for(int i=0;i<a;i++){
			cout<<x[i]<<endl;;
		}
	}
