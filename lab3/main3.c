#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]){
	srand((unsigned)time( NULL));
	int b = rand()%100;
	printf("%d",RAND_MAX);
}
