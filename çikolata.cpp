#include<iostream>
using namespace std;
void fazla(int para,int cikolatap,int kapa){
	int cikolata,temp,toplamkap,a;
	cikolata=para/cikolatap;
	toplamkap=cikolata;
	while(toplamkap>=kapa){
    temp=0;
	cikolata+=(toplamkap/kapa);
	temp=toplamkap/kapa;
	toplamkap=(toplamkap%kapa)+temp;
	}
	cout<<cikolata<<endl;

}
int main(){
	int a,b,c,z;
	cin>>z;
	while(z--){
	cin>>a;
	cin>>b;
	cin>>c;
	fazla(a,b,c);
}
	
}
