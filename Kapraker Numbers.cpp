#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long a,b=0,d,temp,basamak=0,x,y,p,say=0;
	cin>>x;
	cin>>y;
	for(long long i=x;i<=y;i++){
	basamak=0,a=0,b=0,temp=0;
    a=i;
	temp=a;
	a=a*a;
	while(a>0){
		a=a/10;
		basamak++;
	}
	if(basamak%2!=0){
	basamak=pow(10,(basamak/2)+1);
	}
	else{
	basamak=pow(10,basamak/2);
	}
	a=temp*temp;
	while(a>0){
		b+=a%basamak;
		a=a/basamak;
	}
	if(b==temp){
		cout<<b<<" ";
		say++;
	}
	}
	if(say==0){
	cout<<"INVALID RANGE"<<endl;
}
    }

