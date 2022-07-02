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
					double G1,x,Er,Gx;
					x=-1.5;
					do{
						G1=(-exp(-x)-3);
						if(G1<1){
							cout<<"si converge"<<endl<<endl;
						}
						else{
							cout<<"no converge";
							return 0;
						}
						Gx=exp(-x)-3x;
						Er=fabs((Gx-x)/2);
						x=Gx
					}while(Er>=0.1);
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
