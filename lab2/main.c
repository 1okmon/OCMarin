#include "header.h"
main(){
    time_t     sec;
    struct tm* strtime;
    putenv("TZ=PST8PDT");
    time(&sec);
    printf("ctime()     :%s", ctime(&sec));
    strtime = localtime(&sec);
    printf("localtime() :%.2d.%.2d.%.4d %.2d:%.2d:%.2d \n", 
	strtime->tm_mon + 1, strtime->tm_mday, 
	strtime->tm_year + 1900, strtime->tm_hour, 
	strtime->tm_min, strtime->tm_sec);
}