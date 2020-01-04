#include<stdio.h>
#include<conio.h>
void affiche_vecteur(int *vecteur,int dimension)
{
	int i;
	printf("Voici la vecteurd'entiers: \n");
	for(i=0;i<dimension;i++)
	{
		printf("vecteur[%d]= %d \n",i,vecteur[i]);
	}
}
/*Cette fonction permet d'afficher la matrice*/
void afficher_matrice(int **matrice,int lignes,int colonnes)
{
  int i,j;
  	matrice=new int*[lignes];
  for (i=0;i<lignes;i++)
   { 
     matrice=new int* [colonnes];
      for (j=0;j<colonnes;j++)/*affiche_vecteur(matrice[i],colonnes);*/
	  {
	     printf("\t%d",matrice[i][j]);
	  }
        printf("\n");
    }  
}
main()
{
	int vecteur[5]={1,4,7,7,0};
	int **matrice;
	int lignes=2;int colonnes=2;
	affiche_vecteur(vecteur,5);
	afficher_matrice(matrice,2,2);
}
