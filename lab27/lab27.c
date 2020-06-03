#include "header.h"

int main (int ac, char** av){
    FILE* filer,*file;
    int a;
    file=fopen(av[1],"r");
    filer = popen("egrep '$^' | wc -l", "w");
    while(a=fgetc(file)){
	if(feof(file))
	    break;
	fputc(a,filer);
    }   
    pclose(filer);
    return 0;
}
