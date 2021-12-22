#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;
long a[100000];
int main(){
	long long b,c,d,x,temp,p;
	cin>>b>>c>>d;

	for(long i=0;i<b;i++){
		cin>>a[i];
	}
	while(c--){
	temp=a[b-1];
	p=b;
	while(p--){
	a[p]=a[p-1];
	}
	a[0]=temp;
	}
	while(d--){
	cin>> x;
	cout<<a[x]<<endl;
	}
	return 0;
	
}
