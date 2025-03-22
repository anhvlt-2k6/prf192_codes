#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	int sen_legth, word_legth, count_words_matchs = 0;
	char *sentence = malloc(1024 * sizeof(char)), *word = malloc(1024 * sizeof(char));
	
	scanf("%[^\n]", sentence);
	getchar();
	scanf("%[^\n]", word);
	
	sen_legth = strlen(sentence);
	word_legth = strlen(word);
	
	// normalize all words
	for (int i = 0; i < sen_legth; i++) {
		sentence[i] = tolower(sentence[i]);
	}
	
	for (int j = 0; j < word_legth; j++) {
		word[j] = tolower(word[j]);
	}
	
	char *token = strtok(sentence, " ");
    while (token != NULL) {
        if (strcmp(token, word) == 0) count_words_matchs++;
        token = strtok(NULL, " ");
    }
	
	printf("%d", count_words_matchs);
	
	return 0;
}