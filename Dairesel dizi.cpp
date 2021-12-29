
#include <iostream>

using namespace std;
long a[100000],k[100000];
int main(){
    long long b,c,d,x,temp,p,t,i;
    cin>>b>>c>>d;

    for(long i=0;i<b;i++){
        cin>>a[i];
    }
    t=c%b;
    for(int i=0;i<b;i++){
    	k[t++]=a[i];
    	if(t==b){
    	t=0;
		}
	}
    while(d--){
    cin>>x;
    cout<<k[x]<<endl;
    }
    return 0;
    
}

