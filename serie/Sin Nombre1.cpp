#include<iostream>
#include<math.h>
using namespace std;
class ERRORES{
	private:
		int var;
		double V,VA,Ea,Er;
	public:
		ERRORES(){
			V=VA=Ea=Er=0.0;
			var=0;
		}
		void LeeDatos(){
			cout<<"dame un valor : ";
			cin>>var;
		}
		void Calcula(){
			int k=0;
			do{
				VA=pow(var,k)/Factorial(k)+VA;
				k++;
			}while(VA<exp(var));
		}
		double Factorial(int n){
			int fac=1;
			if(n==0){
				return fac;
			}
			else{
				for(int i=1;i<=n;i++)
					fac*=i;
			}
			return fac;
		}
};
int main(){
	return 0;
}
