#include <stdio.h>
int main (){
	int cao;
	printf ("nhap do cao tam giac can ve ");
	scanf ("%d",&cao);
	for (int i=cao;i>0;i--){
		for (int j=i;j>0;j--)
			printf ("* ");
		printf ("\n");
	}
}
