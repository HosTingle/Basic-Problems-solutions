#include<iostream>
using namespace std;
int main(){
	int a[100],b,c,d,topla=0;
	cin >>b;
	cin>> c;
	for(int i=0;i<b;i++){
		cin >>a[i];
		topla+=a[i];
	}
	topla-=a[c];
	cin>>d;
	if(d-(topla/2)>0)
	cout<< d-(topla/2)<<endl;
	else{
		cout<<"Bon Appetit"<<endl;

	}
	
}
