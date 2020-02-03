#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct lieux{
	char nom[30];
	char description[1000];
	int difficultee;
	char gdlaccessible[20];
};

typedef struct lieux lieu_t;

int main(){
char passage1 [20] = "je rentre";
char passage2 [20] = "je continue";
char choix[20];


printf("\n");
printf("vous arrivez devant un cheateau que faites-vous vous voulez rentrer [1] ou continuer votre chemin [2]?\n");
printf("pour continuer le chemin taper: je rentre 	pour continuer son chemin, tapez: continuer\n");
scanf("%s", &choix);


if (strcmp(passage1,"je rentre")==0) {
printf("vous rentrez dans le chateau, vous etes dans la salle principale, aucunes richesses à l'horizon, tout est desert\n");
};

if (strcmp(passage2,"continuer")==0){
printf("vous arrivez au niveau d'une ferme, ses habitants semblent absent ou occuper\n");

};
return 0;
}