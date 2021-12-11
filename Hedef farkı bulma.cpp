#include<iostream>
using namespace std;
int main(){
	int a[10000],b,d,sayma=0,i=0,*v;
	long long c;
	cin >>b;
	cin >>c;
	for(int i=0;i<b;i++){
		cin >>a[i];
	}
	v=a;
	for(int i=0;i<b;i++){
		for(int z=0;z<b;z++){
			if(a[i]-a[z]>0){
			if(a[i]-a[z]==c){
				sayma++;
			}
		}
		}
	}
	cout <<sayma<<endl;
	
}
