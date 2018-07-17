#include <stdio.h>
#include <conio.h>
void NhapSo (int &a,int &b);
int Nhan2So (int a,int b);
float Chia2So (int a, int b);
int Tong2So (int a, int b);
int Hieu2So ( int a,int b);
int main (){
	int a,b,chon,kq;
	printf("\n1.Nhan 2 so");
	printf ("\n2. Chia 2 so");
	printf ("\n3.Cong 2 so ");
	printf ("\n4. Tru 2 so");
	printf ("\nMoi che chon ");
	scanf ("%d",&chon);
	switch (chon){
		case 1: NhapSo(a,b);
			kq=Nhan2So(a,b);
			printf ("\nKQ = %d",kq);
			break;
		case 2: NhapSo (a,b);
		    kq=Chia2So(a,b);
			printf ("\nKQ = %d",kq);
			break;
		case 3: NhapSo (a,b);
			kq=Tong2So (a,b);
			printf ("\nKQ = %d",kq);
			break;
		case 4: NhapSo (a,b);
			kq=Hieu2So (a,b);
			printf ("\nKQ = %d",kq);
			break;
	}
	
}
void NhapSo (int &a,int &b){
	printf ("\n Nhap 2 so can tinh ");
	scanf ("%d %d ",&a,&b);
}
int Nhan2So (int a,int b){
	int nhan=a*b;
	return nhan;
}
float Chia2So (int a, int b){
	float chia=a/b;
	return chia;
}
int Tong2So (int a, int b){
	int tong = a+b;
	return tong;
}
int Hieu2So ( int a,int b){
	int hieu = a-b;
	return hieu;
}
