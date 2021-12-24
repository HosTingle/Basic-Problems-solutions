#include<iostream>
using namespace std;
int main(){
	int a[100],b,c,enkucuk=10000,d=0,z;
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>a[i];
	}
	while(d!=b){
	enkucuk=1000;
	d=0;
	for(int i=0;i<b;i++){
	if(a[i]<enkucuk && a[i]>0){
		enkucuk=a[i];
	}
	}
	for(int i=0;i<b;i++){
		if(a[i]>0){
			a[i]-=enkucuk;
		}
		else{
		d++;
		}
	}
	if(b-d!=0)
    cout<<b-d<<endl;
}

}
