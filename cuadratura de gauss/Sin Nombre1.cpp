#include <iostream>
#include <math.h>
using namespace std;
class CuaGauss{
	private:
		int n;
		double Z,z1,z2,z3,z4,z5,z6,w1,w2,w3,w4,w5,w6,A,a1,a2,a3,a,a4,*x,*y;
		float h;
	public:
		CuaGauss(){
			n=0;
			h=a=a1=a2=a3=a4=z1=z2=z3=z4=z5=z6=w1=w2=w3=A=w4=w5=w6=0.0;
			x=new double[n];
			*x=0.0;
			y=new double[n];
			*y=0.0;
			
		}
		void Lee(){
			cout<<endl<<"Funcion (1/(2*pi)^1/2)*e^(-(x^2)/2)"<<endl<<"Para cuantos puntos? : ";
			cin>>n;
		}
		void Calculaint2(void){
			A=w1*exp((-(2.3*z1)/2)+(.7/2));
			A+=w2*exp((-(2.3*z2)/2)+(.7/2));
		}
		void Calculaint3(void){
			A=w1*exp((-(2.3*z1)/2)+(.7/2));
			A+=w2*exp((-(2.3*z2)/2)+(.7/2));
			A+=w3*exp((-(2.3*z3)/2)+(.7/2));
		}
		void Calculaint4(){
			A=w1*exp(-pow(((2.3*z1)/2)+(.7/2),2)/2);
			A+=w2*exp(-pow(((2.3*z2)/2)+(.7/2),2)/2);
			A+=w3*exp(-pow(((2.3*z3)/2)+(.7/2),2)/2);
			A+=w4*exp(-pow(((2.3*z4)/2)+(.7/2),2)/2);
		}
		void Calculaint5(){
			A=w1*exp((-(2.3*z1)/2)+(.7/2));
			A+=w2*exp((-(2.3*z2)/2)+(.7/2));
			A+=w3*exp((-(2.3*z3)/2)+(.7/2));
			A+=w4*exp((-(2.3*z4)/2)+(.7/2));
			A+=w5*exp((-(2.3*z5)/2)+(.7/2));
		}
		void Calculaint6(){
			A=w1*exp((-(2.3*z1)/2)+(.7/2));
			A+=w2*exp((-(2.3*z2)/2)+(.7/2));
			A+=w3*exp((-(2.3*z3)/2)+(.7/2));
			A+=w4*exp((-(2.3*z4)/2)+(.7/2));
			A+=w5*exp((-(2.3*z5)/2)+(.7/2));
			A+=w6*exp((-(2.3*z6)/2)+(.7/2));
			
		}
		void Calcula(){
			switch(n){
                case 2:
                     w1=w2=1;
                     z2=0.5773502692;
                     z1=-z2;
                 	 Calculaint2();
                 	 A*=(2.3)/(2*sqrt(2*3.1416));
                     system("pause");
                     break;
                case 3:
                     w2=0.888;
                     w1=w3=0.555;
					 z3=.7745966692;
					 z1=-z3;
                     z2=0.0;
                     Calculaint3();
                     A*=(2.3)/(2*sqrt(2*3.1416));
					 system("pause");                    
                     break;
                case 4:
                     w1=w4=0.3478548451;
                     w2=w3=0.652145149;
                     z4=0.8611363116;
                     z1=-z4;
                	 z2=z3=0.3399814;
                	 
                	 Calculaint4();
                	 A*=(2.3)/(2*sqrt(2*3.1416));
                	 system("pause");
                     break;
                case 5:
                	w1=w5=0.236968851;
                	w2=w4=0.478628705;
                	w3=0.56688;
                	Calculaint5();
                	A*=(2.3)/(2*sqrt(2*3.1416));
                	system("pause");
                	break;
				case 6:
					w1=w6=0.17132449;
					w2=w3=0.3007615750;
					w3=w4=.467913;
					z1=z6=0.932469;
					z5=0.6612093865;
					z2=-z5;
					z4=0.2386191861;
					z3=-z4;
					Calculaint6();
					A*=(2.3)/(2*sqrt(2*3.1416));
					system("pause");
					break;                	
  			 }
		}
		
		void Imprime(){
			cout<<endl<<"El valor de A = "<<A<<endl;
		}
};
int main(){
	CuaGauss A;
	
	A.Lee();
	A.Calcula();
	A.Imprime();
	return 0;
}
