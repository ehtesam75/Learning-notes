#include <stdio.h>

void log_msg(char *message);
void f();

int main() {
    f();
    f();

    log_msg("read data");
    log_msg("update data");
    log_msg("delete data");
    return 0;
}

void f(){
    static int var = 3;     //try using it withour static 
    var ++;
    printf("%d\n", var);
}

void log_msg(char *message){
    static int total = 0;
    total++;

    FILE *log_file = fopen("log.txt", "a");
    if(log_file !=NULL){
        fprintf(log_file, "log no: %d, log message: %s\n", total, message);
        fclose(log_file);
    }
}

/*
 static data type is a type of variable that retains its value between function calls. When a variable is declared as static, it is allocated memory space only once, and that memory space remains allocated throughout the entire program's execution.
*/