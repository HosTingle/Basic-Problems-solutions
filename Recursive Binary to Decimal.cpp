#include<iostream>
using namespace std;

int Binary(int a){
	if(a==0){
		return 0;
	}
	else 
	return a % 2 + Binary(a/2)*10;
		
	}



int main(){
	int value;
	while(1){
	
	cout << "Cevirmek istenilen degeri giriniz:";
	cin >> value;
	cout <<Binary(value)<<endl;
    }
	
}
