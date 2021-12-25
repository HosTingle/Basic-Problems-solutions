#include<iostream>
using namespace std;
int a[100];
int main(){
	int b,c,d,e,f,g,h,t,enbuyuk=0,z[100],i=6,p=0,o=6,l=6,x;
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>x;
		a[x]++;
	}
	for(int i=0;i<b;i++){
		for(int z=i+1;z<b;z++){
			if(z-i<=1){
				if(enbuyuk<a[z]+a[i]){
					enbuyuk=a[z]+a[i];
				}
			}
		}
	}
	cout<<enbuyuk<<endl;
}
