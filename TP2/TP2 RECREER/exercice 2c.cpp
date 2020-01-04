#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
int **alloue_matrice(int n,int p,int val)
{
	int i;
	int** mat= malloc(n*sizeof(int * ));
	for(i=0;i<n;i++)
	{
		mat[i]=malloc(p*sizeof(int));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			mat[i][j]=val;
		}
	}
	return mat;
}
void libere__matrice(int**mat,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		free((int *)mat[i]);
	}
}
main()
{
	
}
