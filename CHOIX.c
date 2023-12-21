#include <stdio.h>
#include <time.h>
int main (){
	int jour1,mois1,annee1,n1;
	int jour2,mois2,annee2,n2,choix;
	int nombrejour,nombremois,nombreannee;
	char chaine[10];
	char chaine1[10];
	printf("Entrez la première date:");
	scanf("%d %s %d %s %d",&jour1,&chaine,&mois1,&chaine1,&annee1);
	printf("Entrez la deuxième date:");
	scanf("%d %s %d %s %d",&jour2,&chaine,&mois2,&chaine1,&annee2);
	printf("Faites un choix:\n 1:Jours\n 2:Mois\n 3:annee\n" );
	scanf("%d",&choix);
	switch(choix)
	{
		case 1: 
			n1=jour1+(mois1*30)+(annee1*365);
			n2=jour2+(mois2*30)+(annee2*365);
			nombrejour+=n2-n1;
			
	    printf("Le nombre de jours entre les deux est %d:",nombrejour);
		break;	
		case 2:
			nombremois=(mois2-mois1)+(annee2-annee1)*12;
		printf("Le nombre de mois entre les deux dates est %d:",nombremois);	
		break;	
		case 3:
		nombreannee=annee2-annee1;
		printf("Il y a %d ans entre les deux dates.",nombreannee);
		break;
		default:
		printf("choix incorrecte");
		return 0;
	}
}
