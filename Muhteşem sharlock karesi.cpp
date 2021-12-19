#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a[1000],b,c,d,e,say,z,temp,k,l;
	cin>>b;
	while(b--){
	say=0;
	cin>>k;
	cin>>l; 
		temp=k;
		c=1;
		for(int i=1;i<=l;i=c*c){
			if(i>=k && i<=l){
			say++;
			}
			c++;
	    }
	cout<< say<<endl;
    }
	
}

