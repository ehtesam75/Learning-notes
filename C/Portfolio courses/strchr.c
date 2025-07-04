#include <stdio.h>
#include <string.h>

int main() {
    char tweet[] = "this is my @mention";
    char *match = strchr(tweet, '@');      //strchr returns a pointer
    printf("%s\n", match);

    printf("*match: %p\n", match);
    printf("tweet: %p\n", tweet + 11);   //output same:)

    match[0] = '*';
    match[1] = '*';

    printf("%s\n", tweet);

    if(strchr(tweet, '#') == NULL)
        printf("strchr returned null\n");
    return 0;
}