#include <stdio.h>
#include <conio.h>
#define PI 3.14
float DienTichHinhTron (int r);
float ChuViHinhTron (int r);
int main (){
	int r;
	float s,p;
	printf ("Nhap ban kinh R = ");
	scanf ("%d",&r);
	s=DienTichHinhTron(r);
	p=ChuViHinhTron(r);
	printf ("S = %.3f \n P = %.3f",s,p);
}
float DienTichHinhTron (int r){
	int s;
	s=r*r*PI;
	return s;
}
float ChuViHinhTron (int r){
	int p;
	p=2*r*PI;
	return p;
}
