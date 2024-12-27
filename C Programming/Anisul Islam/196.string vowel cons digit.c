#include <stdio.h>

int main() {
    char ch;
    char title[30] = "My name is aleen7#";
    int vowel, consonant, digit, word, other;
    vowel = consonant = digit = word = other = 0;
    for(int i =0; (ch = title[i]) != '\0'; i++){

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch =='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch =='U')
            vowel++;
        else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
            consonant++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch ==' ')
            word++;
        else 
            other++;
    }
        word++; //word is incremented by 1...
        printf("Number of vowel: %d\n", vowel);
        printf("Number of consonant: %d\n", consonant);
        printf("Number of word: %d\n", word);
        printf("Number of digit: %d\n", digit);
        printf("Number of other: %d\n", other);
    return 0;
}