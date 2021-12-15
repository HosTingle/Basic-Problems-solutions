#include<iostream>
using namespace std;
long a[100000],k[100000];
int main(){
	int b,c=0,d,x,z,enkucuk=100000;
	cin >>b;
	for(int i=0;i<b;i++){
		cin >> x;
		a[x]++;
		if(a[x]==1){
			k[x]=c;
		}
		if(a[x]%2==0){
			if(enkucuk>c){
				enkucuk=c-k[x];
			}
		}
		c++;
	}
	if(enkucuk==100000){
		cout<<-1<<endl;
	}
	else{
	cout << enkucuk<<endl;
    }
}
