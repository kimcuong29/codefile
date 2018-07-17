#include <stdio.h>
#include <conio.h>
int BinhPhuong (int a);
int main (){
	int a;
	printf("\n Nhap so can tinh   ");
	scanf ("%d",&a);
	int s= BinhPhuong (a);
	printf ("\n A^2 = %d",s); 
}
int BinhPhuong (int a){
	int s;
	s=a*a;
	return s;
}
