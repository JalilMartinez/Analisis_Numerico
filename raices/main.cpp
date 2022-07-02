#include<graphics.h>	
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
using namespace std;
class Ecuacion{
	public:
			int x,y;
			double ra;
			
			Grafico(){
				ra=0.0;
				x=0;
				y=0;
			}
			void grafica(){
					cout<<"la raiz de la ec. (x^3)-x-1 : "<< endl<<"  "<<ra;
					for(x=150;x<550;x++){
						y=(pow(x,3))-x-1;
						putpixel(x,y,WHITE);
					}
					setcolor(YELLOW);
					line(100,250,600,250);
					line(180,10,180,450);
					setcolor(RED);
					outtextxy(5,7,"FUNCION Y=COS(X)");
					setcolor(BLUE);
					outtextxy(2,2,"Y");
					outtextxy(600,250,"X");
				}
				void Calcula(){
					
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
				}
			
			    double calec(double a,double b){
			    	double r1,r2,rt;
			    	r1=pow(a,3)-a-1;
			    	r2=pow(b,3)-b-1;
			    	rt=r1*r2;
			    	return rt;
				}
				 
	};
	
	int main(){
		initwindow(1400,1800,"WinBGIm");
		Ecuacion uno;
		uno.Calcula();
		uno.grafica();
		delay(2000);
		getch();
		closegraph();
		return 0;
	}
