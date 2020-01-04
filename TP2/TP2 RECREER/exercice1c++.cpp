#include<iostream>
using namespace std;
void affiche_vecteur(int *vecteur,int dimension)
{
	int i;
	cout<<"Voici la vecteur d'entiers: \n";
	for(i=0;i<dimension;i++)
	{
		cout<<"vecteur["<<i<<"]= " <<vecteur[i]<<" \n";
	}
}
/*Cette fonction permet d'afficher la matrice*/
void afficher_matrice(int **matrice,int lignes,int colonnes)
{
  int i,j;
  for (i=0;i<lignes;i++)
   { 
      for (j=0;j<colonnes;j++)/*affiche_vecteur(matrice[i],colonnes);*/
	  {
	  	cout<<"matrice["<<i<<"]["<<j<<"]= " <<matrice[i][j]<<" \n";
	  }
        cout<<("\n");
    }  
}
main()
{
	int vecteur[5]={1,4,7,2,0};
	int matrice[2][2]={{1,2},{3,4}};
	affiche_vecteur(vecteur,5);
	//afficher_matrice(matrice,2,2);
	return 0;
}
