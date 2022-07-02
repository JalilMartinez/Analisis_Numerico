#include <iostream>
#include <math.h>
using namespace std;
class Ecuacion{
	private:
		
	public:
		Ecuacion(){
			
		}
		void Lee(){
			cout<<"Dame el dato ";
			cin>>dat;
		}
		void Calcula(){
			int k=0;
			do{
				VA=pow(var,k)/Factorial(k)+VA;
				k++;
			}while(VA<exp(var));
		}
		void Imprime(){
			
		}
		
};
int main(){
	
	return 0;
}
