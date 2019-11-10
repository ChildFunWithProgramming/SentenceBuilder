/**
 * Autors: Luisa Roth, Sascha Roth
 */
#include "stdio.h"
#include <time.h>
#include <stdlib.h>


char *Verbs[]={
	"laufen",
	"rennen",
	"schneiden",
	"pfeifen",
	"beissen",
	"fauchen",
	"schlafen",
	"schreien",
	"kaufen",
	"laufen",
	"schreiben"
};


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
	"cool",
	"neu",
	"traurig",
	"blöd",
	"krass",
	"hervorragent",
	"grausam"
};

int getRandom(int index){
	return rand() % index;
}

int main(int arg, char *arv[]){
	srand(time(NULL));
	printf("%s %s %s\n", Adjectives[getRandom(10)], Nouns[getRandom(10)], Verbs[getRandom(11)]);
	return 0;
}
