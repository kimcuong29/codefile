#include <stdio.h>
int main (){
	int n,dem=0;
	printf ("Nhap so can kiem tra ");
	scanf ("%d ",&n);
	while (n>0){
		dem++;
		n=n/10;
		}
	printf ("So co so chu so la %d",dem);
}
