#include<iostream>
#include<math.h>
using namespace std;
class RunRut{
	private: 
		int op;
		double *x,*y,k1,k2,k3,k4,h,x0,y0,xn;
		int n;
	public:
		
		RunRut(){
			n=0;
			k1=k2=k3=k4=h=x0=xn=0.0;
			op=0;	
		}
		void PideDatos(){
			cout<<endl<<"Dame el valor de h = ";
			cin>>h;
			cout<<endl<<"Dame el primer valor de X... X0 = ";
			cin>>x0;
			cout<<endl<<"Dame el primer valor de y... y0 = ";
			cin>>y0;
			cout<<endl<<"Dame el ultimo valor de X... Xn = ";
			cin>>xn;
			cout<<" Como deseas calcularlo ?\n\n\t 1...2do Orden\n\t 2...4to Orden  \n\t______";
			cin>>op;
			Calcula(op);
		}
		void Calcula(int op){
			n=(xn/h)+1;
			x=new double[n];
			*x=0.0;
			y=new double[n];
			*y=0.0;
			*(x+0)=x0;
			*(y+0)=y0;
		
				switch(op){
					case 1:	
							Segord();
						break;
					case 2 :
							Cuarord();
						break;
					default: break;
				}
		
		}
		void Imprime(){
			cout<<endl<<"\t X \t Y \n";
			for(int i=0;i<=xn;i+=h){
				cout<<"\t"<<*(x+i)<<"\t"<<*(y+i)<<endl;
			}
		}
		
		void Segord(){
			float in;
			cout<<"Segundo orden : "<<endl;
			for(int i=0;i<xn;i+=h){
				k1=h*( *(x+i) + (1 / ((5)*(*(y+i)))) );
				k2=h*( (*(x+i)+h) + (1 / ((5)*(*(y+i) + k1)) ) );
				in=(pow(2,-1))*(k1+k2);
				in+=*(y+i);
				*(y+i+1)=in;
				*(x+i+1)=i+h;
			}
			
		}
		void Cuarord(){
			float in;
			cout<<"Cuarto orden : "<<endl;
			for(int i=0;i<xn;i+=h){
				k1=h*( *(x+i) + (1 / ((5)*(*(y+i)))) );
				k2=h*( (*(x+i)+(h/2)) + (1 / ((5)*(*(y+i) + (k1/2))) ) );
				k3=h*( (*(x+i)+(h/2)) + (1 / ((5)*(*(y+i) + (k2/2))) ) );
				k4=h*( (*(x+i)+(h) + (1 / ((5)*(*(y+i) + (k3)) ) )));
				in=(pow(6,-1))*(k1+(2*k2)+(2*k3)+k4);
				in+=*(y+i);
				*(y+i+1)=in;
				*(x+i+1)=i+h;
			}
		}
};

int main(void){
	RunRut a;
	a.PideDatos();
	a.Imprime();
	system("pause");
	return 0;
}
