#include <stdio.h>
int main (){
	int n;
	printf ("Nhap bang cuu chuong ban muon =)");
	scanf ("%d",&n);
	for (int i=1;i<11;i++)
		printf ("\n %d * %d = %d ",n,i,n*i);
}
