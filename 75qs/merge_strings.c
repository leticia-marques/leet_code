#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// char * mergeAlternately(char * word1, char * word2){
//     int size = strlen(word1) + strlen(word2);
//     char* mergedString = malloc(sizeof(char) * size + 1);

//     int j = 0;
//     int i = 0;
//     while (j < size) {
//         if (i < strlen(word1)) {
//             mergedString[j] = word1[i];
//             j++;
//         }
//         if (i < strlen(word2)) {
//             mergedString[j] = word2[i];
//             j++;
//         }
//         i++;        
//     }
//     mergedString[j] = '\0';
//     return mergedString;
// }

char * mergeAlternately(char * word1, char * word2){
    int size = strlen(word1) + strlen(word2);
    char* mergedString = malloc(sizeof(char) * size + 1);
    if (mergedString == NULL) {
        return NULL;
    }

    int j = 0;
    char *word1P = word1;
    char *word2P = word2;

    while (j < size) {
        if (*word1P != '\0') {
            mergedString[j] = *word1P;
            word1P++;
            j++;
        }
        if (*word2P != '\0') {
            mergedString[j] = *word2P;
            word2P++;
            j++;
        }
    }
    mergedString[j] = '\0';
    return mergedString;
}



int main(void) {
    printf("%s\n",mergeAlternately("ab", "pqrs"));
    // mergeAlternately("aos", "lhh");
}


//alohah apbqrs apbqcd apbqcr