#include<iostream>
using namespace std;
int main(){
	int a[100],b,m,n,c=0,sayma=0,temp,z;
	cin >>b;
	for(int i=0;i<b;i++){
		cin>>a[i];
	}
	cin>>m;
	cin >>n;
	temp=n;
		for(int i=0;i<b;i++){
			c=0;
			n=temp;
			z=i;
			while(n!=0){
			n--;
			c+=a[z];
			z++;
			
		}
		if(m==c){
		sayma++;
		}

	}
	cout <<sayma;
}
