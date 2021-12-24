#include<iostream>
using namespace std;
int main(){
	int a[100],b,c,d,i,z=0,p,x=0;
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>a[i];
	}
	i=0;
	p=b;
	while(i<=b && i<=p-3){
		if(a[i+1]==0 &&a[i+2]==0)
		x+=2;
		if(a[i+1]==0 &&a[i+2]==1)
		x+=1;
		if(a[i+1]==1 &&a[i+2]==0)
		x+=2;
		if(a[i+1]==0 &&a[b-1]==0){
		x+=1;
		}
		z++;
		i=x;
	}
	cout<<z<<endl;
}
	
