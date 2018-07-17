#include <stdio.h>
int  GiaiThua (int n);
int main (){
	int n;
	printf ("Nhap N =  ");
	scanf ("%d",&n);
	int ketqua = GiaiThua (n);
	printf ("N! = %d",ketqua);
}
int  GiaiThua (int n){
	int S=1;
	for (int i=1;i<n+1;i++)
		S=S*i;
	return S;
}
