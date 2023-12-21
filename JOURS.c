#include<stdio.h>
#include<time.h>
int main(){
	int jour1,mois1,annee1,n1;
	int jour2,mois2,annee2,n2;
	int nombrejour;
	char chaine[10];
	char chaine1[10];
	printf("Entrez la première date:");
	scanf("%d %s %d %s %d",&jour1,&chaine,&mois1,&chaine1,&annee1);
	printf("Entrez la deuxième date:");
	scanf("%d %s %d %s %d",&jour2,&chaine,&mois2,&chaine1,&annee2);
	n1=jour1+(mois1*30)+(annee1*365);
	n2=jour2+(mois2*30)+(annee2*365);
	nombrejour=n2-n1;
	printf("Il y a %d jours entre les deux dates.",nombrejour);
	return 0;
}
