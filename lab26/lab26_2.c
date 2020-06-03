#include "header1.h"

int main(){
	char buffer[SIZE];
	int symb;
	while(0<(symb = read(0,buffer,SIZE))){
		for(int i = 0; symb>i; i++){
			buffer[i] = toupper(buffer[i]);
		}
		write(1,buffer,symb);
	}
	printf("\n");
}
