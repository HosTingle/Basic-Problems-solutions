#include<iostream>
using namespace std;
void yildon(int x){
	if(x==1918){
		cout<<"26.09."<<x<<endl;
	}
	else if((x%4==0 && x!=1918) ||(x%400==0 && x>1918 ) || (x%4==0 && x%100!=0)){
		cout<<"12.09."<<x<<endl;
	}
	else
	cout<<"13.09."<<x<<endl;
}
int main(){
	int a;
	cin>>a;
	yildon(a);
}
