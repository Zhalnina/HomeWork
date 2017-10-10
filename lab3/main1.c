#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	char c;
	for (i=0; i<26; i++){
		c = 'a';
		printf("%c %d\n",c+i, c+i); 
	}
	for (i=0; i<26; i++){
		c = 'A';
		printf("%c %d\n",c+i, c+i); 
	}
	c=' ';
		printf("'' %d\n",c); 
	c='\n';
		printf("\\n %d",c,c);
	return 0;
}
