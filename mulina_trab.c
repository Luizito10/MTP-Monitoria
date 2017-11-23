#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct dados
{
	char matr[16];
	char nome[50];
	int nmat;
	int faltas[12];
};


int main(int argc, char *argv[]) {
	struct dados aluno[2];
	int i = 0;
	FILE *bd;
	int op = 0;
	int k = 0;
	int n = 0;
	printf("digita a op");
	printf("\n1 para cadastrar\n2 para mostrar\n3 para chamada\n");
	scanf("%d",&op);
	if (op == 1)
	{
	//inserir
		printf("\nnome:");
		scanf("%s",aluno[0].nome);
		printf("\nmatricula:");
		scanf("%s",aluno[0].matr);
		printf("\nn mat:");
		scanf("%d",&(aluno[0].nmat));
		if(aluno[0].nmat>12)
			aluno.nmat=12;
		for (i = 0; i < aluno.nmat;i++)
		{
			printf("\nfaltas materia %d:",i+1);
			scanf("%d",aluno.faltas+i);
		}
		//abrir o arquivo
		bd = fopen("bd.txt","ab");
		if (bd == NULL)
		{
			printf("erro ao abrir");
			getchar();
		}	
		else {
			//escrever
			/*fprintf(bd,"%s %s %02d ",aluno.matr,aluno.nome,aluno.nmat);
			for (i = 0; i < aluno.nmat;i++)
			{
			fprintf(bd,"%02d ",aluno.faltas[i]);
	 	 	 } 	
			fprintf(bd,"\n");*/
			fwrite(&aluno,sizeof(aluno),1,bd);
			//fprintf(bd,"\n");
			// fseek(bd,i*sizeof(aluno),SEEK_SET);
			//fread(&aluno,sizeof(aluno),1,bd);
			fclose(bd);
			}
		}
	else if (op == 2)
	{
	//abrir o arquivo
		int tamanho = 1;
		bd = fopen("bd.txt","r+b");
		if (bd == NULL)
		{
			printf("erro ao abrir");
			getchar();
		}
		fread(&aluno,sizeof(aluno)*tamanho,1,bd);
		printf("\nnome: %s",aluno.nome[0]);
		printf("\nmatricula: %s",aluno.matr[0]);
		printf("\nn mat: %d",aluno.nmat[0]);
		for (i = 0; i < aluno.nmat;i++)
		{
			printf("\nmateria %d: %d",i+1,aluno.faltas[i]);
		}
		tamanho++;
		fread(&aluno,sizeof(aluno)*tamanho,1,bd);
		printf("\nnome: %s",aluno.nome[1]);
		printf("\nmatricula: %s",aluno.matr[1]);
		printf("\nn mat: %d",aluno.nmat[1]);
		for (i = 0; i < aluno.nmat;i++)
		{
			printf("\nmateria %d: %d",i+1,aluno.faltas[i]);
		}
		
		printf("\n\n");
		}
	else if (op == 3)
	{
		int presenca = 0;
		//abrir o arquivo
		bd = fopen("bd.txt","r+b");
		if (bd == NULL)
		{
			printf("erro ao abrir");
			getchar();
		}
		fread(&aluno,sizeof(aluno),1,bd);
		printf("\nnome: %s",aluno.nome);
		for(i=0;i<aluno.faltas[i];i++)
		{
			printf("\nfaltas materia %d: %d\n",i+1,aluno.faltas[i]);
			printf("0 ausente 1 presente");
			scanf("%d",&presenca);
			if(presenca == 0) aluno.faltas[i]++;
 	    }
		fseek(bd,0,SEEK_SET);
		fwrite(&aluno,sizeof(aluno),1,bd);
	}
	getchar();
	return 0;
}