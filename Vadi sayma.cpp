#include<iostream>
using namespace std;
int main(){
    char a[100];
    int x,y=0,vadi=0,k=0;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a[i];
        if(a[i]=='D')
        y--;
        else if(y==0){
        vadi++;
		}
        else{
        y++;
    }
  
}
  cout<<vadi<<endl;
}
