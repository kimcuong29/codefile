#include <stdio.h>
int main (){
	int n,dem,number;
	printf ("Nhap so can kiem ta =) ");
	scanf ("%d",&n);
		while (n>0){
			number=n%10;
			if (number%2!=0){
				printf ("N khong toan so chan");
				break;}
			n=n/10;
	}
	if (n==0)
		printf ("N toan so chan");
		
		
		
}	
