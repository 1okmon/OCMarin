#include "header1.h"

int main(){
	char text[S] = "sdal li ya labu?";
	FILE* ch = popen("./lab26_2.o","w");
	int i;
	fputs(text, ch);
	pclose(ch);
	return 0;
}
