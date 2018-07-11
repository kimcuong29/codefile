#include <stdio.h>
#include <conio.h>
int main (){
	int n;
	printf ("Nhap pham vi ");
	scanf ("%d",&n);
	for (int i=n;i>0;i--){
		for(int j =1;j<i+1;j++)
			printf ("%d",j);
		printf ("\n");
	}
}
