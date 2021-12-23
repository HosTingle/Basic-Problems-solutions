#include<iostream>
using namespace std;
int main(){
	int a[100000],b[100000],c=0,d,f,k=0,m=0,e[10000];
	cin>>d;
	for(int i=0;i<d;i++){
		cin>>a[i];
	}
	cin>>f;
	for(int i=0;i<f;i++){
		cin>>b[i];
	}
	for(int c=f-1;c>=0;c--){
		while(a[m]>b[c] && m!=d){
		if(a[m]==a[m+1]){
		k++;
		}
		m++;
		}
		e[c]=m+1-k;
    }
    for(int i=0;i<f;i++){
    	cout<<e[i]<<endl;
	}
}
