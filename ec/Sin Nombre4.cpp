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
				
				double i,k=0,Xo=1,Xn=3,Xm,Xmn=1,Er,xo,xn;
				do{
					Xm=(Xo+Xn)/2;
					xo=Xo;
					xn=Xn;
					i=calec(Xo,Xn);
					if(i=0){
						ra=Xm;
					}
					else{
						if(i<0){
							Xo=Xm;
						}
						else{
							Xo=Xn;
						}
					}
					Er=fabs((Xmn-Xm)/Xmn);
				}while(Er>0.0001,ra=Xm);
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

