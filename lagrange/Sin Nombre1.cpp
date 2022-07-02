#include <iostream>
#include <math.h>
using namespace std;
class Lagrange{
	private:
		double *X,*Y,x,y,Y1,Y2,Y3,Y4,Yt;
		int n;
	public:
		Lagrangue(){
			X=new double[1];
			*X=0.0;
			Y=new double[1];
			*Y=0.0;
			x=y=Y1=Y2=Y3=Y4=Yt=0.0;
			n=0;
		}
		void PideDatos(){
			n=4;
			X=new double[n];
			Y=new double[n];
			
			cout<<endl<<"Dame los datos de X :"<<endl;
			for(int i=0;i<n;++i)
				cin>>*(X+i);
			
			cout<<endl<<"Dame los datos de Y : "<<endl;
			for(int i=0;i<n;i++)
				cin>>*(Y+i);
			
			cout<<endl<<"Dame el valor de X para el que deseas encontrar Y : ";
			cin>>x;
		}
		void Calcula(){
			Y1=(((x-*(X+1))*(x-*(X+2))*(x-*(X+3))) / ((*(X+0)-*(X+1))*(*(X+0)-*(X+2))*(*(X+0)-*(X+3))))*(*(Y+0));
			
			Y2=(((x-*(X+0))*(x-*(X+2))*(x-*(X+3))) / ((*(X+1)-*(X+0))*(*(X+1)-*(X+2))*(*(X+1)-*(X+3))))*(*(Y+1));
			
			Y3=(((x-*(X+0))*(x-*(X+1))*(x-*(X+3))) / ((*(X+2)-*(X+0))*(*(X+2)-*(X+1))*(*(X+2)-*(X+3))))*(*(Y+2));
			
			Y4=(((x-*(X+0))*(x-*(X+1))*(x-*(X+2))) / ((*(X+3)-*(X+0))*(*(X+3)-*(X+1))*(*(X+3)-*(X+2))))*(*(Y+3));
			
			Yt=Y1+Y2+Y3+Y4;
		}
		void Imprime(){
			cout<<endl<<" X \t\t Y"<<endl;
			for(int i=0;i<n;i++)
				cout<<*(X+i)<<" \t\t "<<*(Y+i)<<endl;
			cout<<endl<<"El valor dado de X es = "<<x<<", El resultado es Y = "<<Yt<<endl;
		}
		
};
int main(){
	Lagrange Xi;
	Xi.PideDatos();
	Xi.Calcula();
	Xi.Imprime();
	return 0;
}
