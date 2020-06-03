#include "header.h"

int main(void){

	int p[2];	
	if(fork() == 0){
		char buffer [256] = "";
		while (1){
			int rc = read (p[in], buffer, 256);
			for (int i = 0; i < rc; i ++) buffer[i] = toupper (buffer[i]);
			write (1, buffer, rc);
				return 0;
		}
	}
	close(p[in]);
	close(p[out]);
	while(wait(0) == 0)
	return 0;
}
