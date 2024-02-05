#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findWordsStartingWithA(const char *filename) {
    FILE *file = fopen(filename, "r");
    
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char word[100];  // Assuming the maximum word length is 100 characters
    while (fscanf(file, "%s", word) == 1) {
        if (word[0] == 'a' || word[0] == 'A') {
            printf("Found word starting with 'a': %s\n", word);
        }
    }

    fclose(file);
}

int main() {
    const char *filename = "words.txt";  // Change this to your file name
    findWordsStartingWithA(filename);

    return 0;
}


/*
 * Notes:
 * I asked for all words that start with 'a'. This fails in that it also
 * checks for words that start with 'A'. This can be attributed to translation
 * error.
*/