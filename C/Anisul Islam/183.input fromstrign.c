#include <stdio.h>

int main() {
    char name[34], title[34];
    scanf("%s", name); //scanf only scan 1 word , so inorder to scan multiple word we can use gets or fgets...but its recomended to not to use gets fucntion
    printf("%s", name);
    getchar(); // consume the newline character left in the buffer
    fgets(title, 34, stdin); // read the input string using fgets
    puts(title);
    
    return 0;
}
