#include<iostream>
using namespace std;
int main(){
    long a[200000];
    int b,c,d,say=0,z,x;
    cin>>b;
    cin>>c;
    for(int i=0;i<b;i++){
        cin>> a[i];    
    }
    for(int i=0;i<b;i++){
    
        for(int z=0;z<b;z++){
        if(a[z]-a[i]>c){
            break;
        }
            for(int x=0;x<b;x++){
            if(a[x]-a[z]>c){
                break;
            }
                if(a[z]-a[i]==c && a[x]-a[z]==c){
                    say++;
                }
            }
        }
    }
    cout <<say<<endl;
}

