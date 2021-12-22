#include<iostream>
using namespace std;
int main(){
    int a[100],b[100],c,d,e,k,say=0,kay,zay=0,t,l,m,o;
    cin>> c;
    cin>>d;
    for(int i=0;i<c;i++){
        cin>> a[i];
    }
    for(int z=0;z<d;z++){
        cin>> b[z];
    }
    k=a[c-1];
    t=1;
    m=k;
    o=100;
    while(o--){
	k=m*t;
    kay=0;
    for(int i=0;i<c;i++){
        if(k%a[i]==0){
            kay++;
            if(kay==c){
            zay=0;
            for(int m=0;m<d;m++){
                if(b[m]%k==0){
                    zay++;
                    if(zay==d){
                    say++;
                }
                }
            }
        }
        }
    }
    if(k==b[0]){
    break;
	}
    t++;
    }
    cout<<say<<endl;
        
}
