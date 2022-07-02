#include<iostream>
#include<math.h>
using namespace std;
int main (){
	double Xo,Xn,Xm,Xm1,a,b,Er;
	Xo=Xn=Xm1=a=b=Er=0.0;
	Xo=-1;
	Xn=1;
	a=pow(Xo,3)-Xo-1;
	b=pow(Xn,3)-Xn-1;
	if((a*b)>0){
		cout<<"Hay almenos una raiz"<<endl;
	}
	else{
		cout<<"no hay raiz en el intervalo ["<<Xo<<","<<Xn<<"]"<<endl;
		return 0;
	}
	
	Xm=((Xo+Xn)/2);
	do{
		a=exp(-Xo)-Xo;
		b=exp(-Xm)-Xm;
		if((a*b)<0){
			Xn=Xm;
		}
		else{
			if((a*b)>0){
				Xo=Xm;
			}
			else{
				cout<<"La raiz es : "<<Xm<<endl;
				return 0;
			}
		}
		Xm1=(Xo+Xn)/2;
		Er=fabs(((Xm1-Xm)/Xm1));
		if(Er<0.1){
			cout<<"La raiz es : "<<Xm1;
			return 0;
		}
		Xm=Xm1;
	}while(Er>0.1);
	return 0;	
}
