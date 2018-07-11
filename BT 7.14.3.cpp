#include <stdio.h>
int main (){
	int cao,a[100][100];
	printf ("nhap do cao tam giac can ve ");
	scanf ("%d",&cao);
	a[1][1]=0;
	for (int i=0;i<cao+1;i++){
		for (int j=0;j<i;j++){
			a[i][j]=a[i][j]+1;
			printf ("%d ");}
		printf ("\n");
	}
}
