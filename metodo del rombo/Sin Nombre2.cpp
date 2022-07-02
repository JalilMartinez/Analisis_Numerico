#include <iostream>
#include <math.h>
using namespace std;
class CuaGauss{
	private:
		int n;
		double N,a1,a2,a,*X,*Y,*I;
		float h;
	public:
		CuaGauss(){
			n=0;
			h=N=a=a1=a2=0.0;
			X=new double[n];
			*X=0.0;
			Y=new double[n];
			*Y=0.0;
			I=new double[n];
			*I=0.0;
		}
		void Lee(){
			cout<<endl<<"Funcion (x´2)+2x "<<endl<<"Para cuantos trapecios : ";
			cin>>n;
			
		}
		void Calcula(){
			double sum;
			int de=0,NI=0,N,f;
			N=n-1;
			*(X+0)=1;
			*(Y+0)=3;
			NI=0;
			de=2;
			f=2;
			do{	
				*(X+f-1)=2;
				h=pow(NI+1,-1);
				cout<<"h = "<<h;
				for(int i=1;i< f ;i+=h){
					*(X+i)=i+h;
					*(Y+i)=pow(*(X+i),2) + ( 2 * (*(X+i)) );
					
				}
			
				if(h>=1){
					sum=0.0;
				}
				else{
					for(int i=1;i<f-1;i+=h){
					sum+=*(Y+i);
					}	
				}
				*(I+ NI)=( *(Y+0) + *(Y+n-1) + (2)*(sum) );
				*(I+ NI)*= pow(de,-1);
				cout<<endl<<"  h =  "<<h;;
				cout<<endl<<"  X\tY ";
				for(int i=0;i<f;i++){
					cout<<endl<<*(X+i)<<"\t"<<*(Y+i);
				}	
				cout<<endl<<endl<<*(I+N);
				NI++;
				de+=2;
				f++;
				
			}while(NI<n);
		}
		void Imprime(){
			system("pause");
			system("cls");
			
			for(int i=0;i<n;i++)
				cout<<endl<<" I "<<i+1<<" : "<<*(I+i)<<endl; 
			
		}
};
int main(){
	CuaGauss A;
	cout<<endl<<"la funcion es (x^2)+2x";
	A.Lee();
	A.Calcula();
	A.Imprime();
	return 0;
}
