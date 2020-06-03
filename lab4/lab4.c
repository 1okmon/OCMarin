#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
typedef struct list {
    char *string;
    struct list *next;
} list;


list* add(list *l, char *arr) {
    if (l == NULL) {
        l = (list*)malloc(sizeof(list));
        l->next = NULL;
        l->string = malloc(strlen(arr)*sizeof(char));
        l->string[strlen(arr)] = '\0';
        strcpy(l->string,arr);
        return l;
    }
    else {
        l->next = add(l->next, arr);
    }
    return l;
}

int main() {
    list *l = NULL;
    int flag = 0;
    char arr[MAX] = {0};
    char *tmp = 0;
    int capacity = 0;
    int size = 0;
    while (1) {
        tmp = malloc(sizeof(char)*MAX);
        capacity = MAX;
        size = 0;
        while(arr[strlen(arr)-1] != '\n'){
                fgets(arr, MAX, stdin);
                if(capacity - size < MAX){
                        capacity *= 2;
                        tmp = realloc(tmp, capacity);
                }
                if(size == 0 && arr[0] == '.'){
                        flag = 1;
                }
                strcpy(tmp + size, arr);
                size +=strlen(arr);
        }

        if(flag){
                break;
        }
        memset(arr, 0, MAX);
        l = add(l, tmp);
        free(tmp);
    }
    for (;l;) {
        list *k = l;
        printf("%s", l->string);
        l = l -> next;
        free(k);
    }
    return 0;
}
