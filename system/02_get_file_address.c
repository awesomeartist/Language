// #include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    //打印输出当前路径
    char *buffer;
    //也可以将buffer作为输出参数
    if((buffer = getcwd(NULL, 0)) == NULL) {
        perror("getcwd error");
    }
    else {
        printf("path:%s\n", buffer);
        free(buffer);
    }

    return 0;
}
