#include "stdio.h"
#include <time.h>
#include <stdlib.h>


char *Nouns[]={
	"Tiger",
	"Mama",
	"Motorrad",
	"Papa",
	"Katze",
	"Jacke",
	"Wasser",
	"Murmel",
	"Kaka",
	"Pipi"
};

char *Adjectives[]={
	"spannend",
	"bunt",
	"ekelig",
	"schön",
	"cool"
};

int getRandom(int index){
	return rand() % index;
}

int main(int arg, char *arv[]){
	srand(time(NULL));
	printf("%s %s\n", Adjectives[getRandom(5)], Nouns[getRandom(10)]);
	return 0;
}
