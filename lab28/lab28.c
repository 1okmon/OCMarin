#include "header.h"
#define MAX 100

int main (){
    int i = 0;
    int j = 0;
    FILE* fd[2];
    p2open("sort -n", fd);
    srand(time(NULL));
    for (i = 0; i < 100 ; i++){
	fprintf(fd[0], "%d\n", rand()%MAX);
    }
    pclose(fd[0]);
    for (i = 0; i < 10; i++){
	for (j = 0; j < 10; j++){
	    int val;
	    fscanf(fd[1], "%d", &val); 
	    printf("%2d ", val);
	}
	printf("\n");
    }
    pclose(fd[1]);
    return 0;
}
