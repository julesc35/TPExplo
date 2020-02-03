#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int choix;
int choixinter;
int choixfin;

int main(){
int endurence = 10;

printf("\n");

printf("vous arrivez devant un cheateau que faites-vous ?\n");
printf("je rentre: 1  je continue mon chemin: 2	se reposer\n");
scanf("%d", &choix);


if (choix == 1){
	int endurence = -1;
printf("vous rentrez dans le chateau, vous etes dans la salle principale, aucunes richesses à l'horizon, tout est desert\n");
	return choix;
}

if (choix== 2){
printf("vous arrivez au niveau d'une ferme, ses habitants semblent absent ou occuper\n")
	return choix;
}

return 0;
}