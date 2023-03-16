#include <stdio.h>
#include <stdlib.h>
int fibo(int x){
	if(x==1)
	return 0;
	else if(x==2)
	return 1;
	return fibo(x-1)+ fibo(x-2);
}
int main() {
int n,i;
printf("how many numbers would you like to see\n");
scanf("%d",&n);
for(i=1;i<=n;i++){

printf(" result : %d\n",fibo(i));
}

	
	return 0;
}