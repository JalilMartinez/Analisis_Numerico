#include <iostream>
#include <math.h>
using namespace std;
class Trap{
	private:
		int n;
		double h,N,a1,a2,a,*X,*Y;
	public:
		Trap(){
			n=5;
			h=N=a=a1=a2=0.0;
			X=new double[n];
			*X=0.0;
			Y=new double[n];
			*Y=0.0;
		}
	
		void Calcula(){
			double sum;
			n=6;
			N=5;
			h=1;
			for(int i=0;i<n;i++){
				*(X+i)=i+1;
				*(Y+i)=(exp(*(X+i)))*log(*(X+i));
			}
			a1=( *(Y+0) + *(Y+2) + 4*(*(Y+1)));
			a1*=.3333;
			a2=( *(Y+2) + *(Y+ 5) + 3*( *(Y+3) + *(Y+4) ));
			a2*=.375;
			a=a1+a2;
		}
		void Imprime(){
			system("pause");
			system("cls");
			cout<<"   X \t\t Y"<<endl;
			for(int i=0;i<n;i++)
				cout<<*(X+i)<<"\t\t"<<*(Y+i)<<endl;
			cout<<endl<<"a1 = "<<a1<<endl;
			cout<<endl<<"a2 = "<<a2<<endl;
			cout<<endl<<"at = "<<a<<endl;
		}
};


int main(){
	Trap A;
	cout<<endl<<"la funcion es (e^x)*ln(x)";
	A.Calcula();
	A.Imprime();
	return 0;
}
