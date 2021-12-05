#include<iostream>
using namespace std;
int fakt(int a){
	if(a==1){
		return a;
	}
	else 
	return a*fakt(a-1);
}
int main(){
	cout <<fakt(7);
	
}
