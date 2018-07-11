#include <stdio.h>
int main (){
	int cao;
	printf ("nhap do cao tam giac can ve ");
	scanf ("%d",&cao);
	for (int i=0;i<cao+1;i++){
		for (int j=0;j<i;j++)
			printf ("* ");
		printf ("\n");
	}
}
