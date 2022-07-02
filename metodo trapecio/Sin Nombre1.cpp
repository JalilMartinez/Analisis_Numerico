 #include <iostream>
#include <math.h>
using namespace std;
class Trap{
	private:
		int n;
		double X1,X2,X3,**X;
	public:
		Trap(){
			n=0;
			X3=X2=X1=0.0;
			X=new double[n];
			for(i=0;i<n;i++){
				*(X+i)=0.0;	
			}
			
			Y=new double[n];
			*Y=0.0;
		}
		void Lee(){
			cout<<endl<<"Cuantos valores de X vas a ingresar : ";
			cin>>n;
			X=new double[n];
			*X=0.0;
			Y=new double[n];
			*Y=0.0;
			cout<<"dame los valores de X ";
			for(int i=0;i<n;i++){
				cin>>*(X+i);
			}
			cout<<"dame los valores de Y ";
			for(int i=0;i<n;i++){
				cin>>*(Y+i);
			}
		}
		void Calcula(){
			double sum;
			N=n-1;
			h=(*(X+4)-*(X+0))/(n-1);
			for(int i=1;i<n-1;i++){
				sum+=*(Y+i);
			}
			a=(h/2)*((*(Y+0))+(*(Y+ n-1))+(2*sum));
			
		}
		void Imprime(){
			system("pause");
			system("cls");
			cout<<"   X \t\t Y"<<endl;
			for(int i=0;i<n;i++)
				cout<<*(X+i)<<"\t\t"<<*(Y+i)<<endl;
			cout<<endl<<"h = "<<h<<endl<<"A 1/2 = "<<a;
			
		}
};
int main(){
	Trap A;
	A.Lee();
	A.Calcula();
	A.Imprime();
	return 0;
}
