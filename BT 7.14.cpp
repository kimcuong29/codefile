#include <stdio.h>
int main (){
	int dai,rong ;
	printf ("Nhap chieu dai");
	scanf ("%d",&dai);
	printf ("Nhap chieu rong");
	scanf ("%d",&rong);
	for (int i=0;i<rong;i++){
		for (int j=0;j<dai;j++)
				printf ("*");
				printf ("\n");}
}
