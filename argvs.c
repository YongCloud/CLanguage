#include <stdio.h>

int main(int argv,char* argc[]){
    printf("argv=%d\n",argv);
    int i;
    for(i=0;i<argv;i++){
        printf("%s\n",argc[i]);
    }
    return 0;
}
