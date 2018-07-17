#include <stdio.h>
#include <conio.h>
int Tong3So (int a,int b, int c);
int main (){
	int a,b,c;
	printf ("Nhap 3 so can tinh ");
	scanf ("%d %d %d ",&a,&b,&c);
	int s=Tong3So(a,b,c);
	printf ("Sum = %d ",s);
}
int Tong3So (int a,int b, int c){
	int Tong=0;
	Tong = a+b+c;
	return Tong;
	}
