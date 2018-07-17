#include <stdio.h>
#include <conio.h>
int KtSoNguyenTo(int n);
int main (){
	int n;
	printf ("\n Nhap so N can kT : ");
	scanf ("%d",&n);
	int kq=KtSoNguyenTo(n);
	if (kq==1)
		printf ("\n N la so nguyen to");
	else 
		printf ("\n N khong phai so nguyen to");	
	for (int i=2;i<n;i++)
		if (KtSoNguyenTo(i)==1)
			printf ("\n %d ",i);
}
int KtSoNguyenTo(int n){
	int dem;
	for (int i=1;i<n+1;i++)
		if (n%i==0)
			dem++;
	if (dem==2)
		return 1;
	return 0;
}
 
