#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
int **alloue_matrice_zero(int n,int p)
{
	int i;
	int** mat= calloc(n,sizeof(int *));//calloc a deux parametres
	for(i=0;i<n;i++)
	{
		mat[i]=malloc(p,sizeof(int));
	}
	return mat;
}
void genere__matrice_identite(int dim)
{
	int i;
	int **identite= alloue_matrice_zero(dimension,dimension)
	for(i=0;i<dim;i++)
	{
		identite[i][i]=1;
		affiche_matrice(identite,dimension,dimension);
		return identite
	}
}
main()
{
	
}
