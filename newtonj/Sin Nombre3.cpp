#include<iostream>
#include<math.h>
using namespace std;
int main (){
	double F1,x,Er,Fx;
	x=2.3;

	F1=((pow(x,2)-7)*2)/(pow(2*x,2));
	if(F1<1){
		cout<<"si converge"<<endl<<endl;
	}
	else{
		cout<<"no converge";
		return 0;
	}
	do{
		Fx=(x)-((pow(x,2)-7)/(2*x));
		Er=fabs((Fx-x)/2);
		x=Fx;
	}while(Er>0.01);
	cout<<"La raiz es : "<<x<<endl;
	return 0;	
}
