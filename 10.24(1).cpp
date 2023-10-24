#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int c,d,e;
    d=(atoi)(a.c_str());
	e=(atoi)(b.c_str());
    for(int i=0;i<(a.length()/2);i++)
    {
    	c=a[i];
    	a[i]=a[a.length()-i-1];
    	a[a.length()-i-1]=c;
    }
    for(int i=0;i<(b.length()/2);i++)
    {
    	c=b[i];
    	b[i]=b[b.length()-i-1];
    	b[b.length()-i-1]=c;
    }
    if(d*e==(atoi)(a.c_str())*(atoi)(b.c_str())){
    	cout<<d<<"*"<<e<<"="<<(atoi)(a.c_str())<<"*"<<(atoi)(b.c_str());
	}else{
		cout<<d<<"*"<<e<<"!="<<(atoi)(a.c_str())<<"*"<<(atoi)(b.c_str());
	}
    return 0;
}