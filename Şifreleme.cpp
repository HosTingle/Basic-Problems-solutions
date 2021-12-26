#include<iostream>
#include<math.h>
using namespace std;

int main(){
	char a[10000],z[1000][1000];
    long long d,e,f,i,b,p=0,t=0,say=0,l;
    double c=0;
    cin>>a;
    for(long i=0;a[i]!='\0';i++){
    	c++;
	}
	for(long i=0;i<c;i++){
		if(sqrt(c)>i && sqrt(c)<=(i+1)){
    	b=i;
    	l=i+1;
		}
	}
	if(b*(b+1)<c){
	b=b+1;
	l=b;
	}
	for(int i=0;i<c;i++){
		if(t==l){
		p++;
		t=0;
		}
		z[p][t]=a[i];
		t++;
		
	}
	for(long i=0;i<b+1;i++){
		if(say>0){
		cout<<" ";
	    }
		say++;
		for(long y=0;y<b;y++){
			if(z[y][i]!='\0')
			cout<<z[y][i];
		}
	}
	
}



