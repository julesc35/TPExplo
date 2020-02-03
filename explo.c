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

char lieu1 [20] = "chateau";
char lieu2[20] = "caverne";
char lieu3[20] = "marais";

lieu_t chateau = {"chateau", "anciens lieux de pouvoir desormais en proie a la vegetation", 2, "caverne" && "marais"};
lieu_t caverne = {"caverne", "lieu de tenebre renfermant des créatures immondes", 8, "chateau" && "marais"};
lieu_t marais = {"marais", "marais servant de cimetiere ou les corps erent", 10, "chateau"&&"caverne"};

printf("\n");
printf("vous pouvez desormais vous rendre au %s dans la %s ou alors au %s\n",chateau.nom, caverne.nom, marais.nom);
printf("difficultee des lieux: %s: %d, %s: %d, %s: %d\n", chateau.nom, chateau.difficultee, caverne.nom, caverne.difficultee, marais.nom, marais.difficultee);
printf("ou souhaitez vous aller ?\n");
scanf("%s", &choix);

if (strcmp(lieu1,choix)==0){
printf("vous arrivez au %s, %s", chateau.nom, chateau.description);

};

if (strcmp(lieu2,choix)==0){
printf("vous arrivez a la %s, %s", caverne.nom, caverne.description);

};

if (strcmp(lieu3,choix)==0){
printf("vous arrivez au %s, %s", marais.nom, marais.description);

};

return 0;
}