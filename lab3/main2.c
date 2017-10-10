#include <stdio.h>
#include <stdlib.h>
#define NMAX 100
int F[NMAX]; 

int main(int argc, char *argv[]) { 
	int i,n;
	scanf("%d", &n); 
	F[0]=0; 
	F[1]=1; 
	printf("%d ", F[0]);

	if (n==1) 
		printf("%d ", F[1]); 
	else if(n>1){ 
		printf("%d ", F[1]); 
		for (i=2; i<=n; i++) 
			printf("%d " , F[i]=F[i-1]+F[i-2]); 
	} 
	return 0; 
}
