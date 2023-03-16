#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d=0;
	int x0=0;
	int x1=1;
	unsigned int xn=0;
	int xn1=0;
	int xn2=0;
	printf("sayi girin\n");
	scanf("%d",&d);
	if(d==0)
	printf("0");
	else if(d==1)
	printf("1");
	else {

	int dongu=0;
	xn1=1;
	xn2=0;
	for(dongu=1;d>dongu;dongu++)
	{
		xn=xn1+xn2;
		xn2=xn1;
		xn1=xn;
	}
		}
	printf("%u",xn);	
	return 0;
}