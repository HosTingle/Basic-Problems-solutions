#include<iostream>
using namespace std;
int main(){
	long long a[100000],b,c,d,say=0,cift=0,tek=0;
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>a[i];
		if(a[i]%2==0){
		cift++;
		}
		else
		tek++;
	}
	for(int i=b-1;i>=0;i--){
		if(a[i]%2!=0){
		a[i]+=1;
		say++;
		if(a[i-1]%2!=0 && i-1>0){
		a[i-1]+=1;
		say++;
		}
		else if(a[i+1]%2!=0){
		a[i+1]+=1;
		say++;
		}
		else{
		a[i+1]+=1;
		say++;
	    }
		}
	}
	if(cift==1 && tek==1){
	cout<<"NO"<<endl;
	}
	else
	cout<<say<<endl;
}
