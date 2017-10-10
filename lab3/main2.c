#include <stdio.h>
#include <stdlib.h>
#define NMAX 100
long long int  F[NMAX]; 

int main(int argc, char *argv[]) { 
	int i,n;
	scanf("%d", &n); 
	F[0]=0; 
	F[1]=1; 
	printf("%lld ", F[0]);

	if (n==1) 
		printf("%lld ", F[1]); 
	else if(n>1){ 
		printf("%lld ", F[1]); 
		for (i=2; i<=n; i++) 
			printf("%lld " , F[i]=F[i-1]+F[i-2]); 
	} 
	return 0; 
}
