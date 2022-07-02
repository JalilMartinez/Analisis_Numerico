#include<iostream>
#include<math.h>
using namespace std;
int main (){
	double G1,x,Er,Gx;
	x=1;
	do{
		G1=(exp(x)-2);
		if(G1<1){
			cout<<"si converge"<<endl<<endl;
		}
		else{
			cout<<"la raiz es : "<<x<<endl;
			cout<<"no converge";
			return 0;
		}
		Gx=exp(x)-(2*x);
		Er=fabs((Gx-x)/2);
		x=Gx;
		cout<<x<<endl;
	}while(Er>=0.10);
	cout<<"la raiz es : "<<x<<endl;
	return 0;	
}
