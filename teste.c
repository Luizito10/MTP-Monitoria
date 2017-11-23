#include <stdio.h>
void mostrar ();
void cadastrar ();


int main ()
{

    int x = 0;
    do
    {
        system("cls");
        printf("Escolha uma Alternativa:\n1- Cadastrar\n2- Mostrar\n3- Sair\n");
        fscanf(stdin, "%d", &x);
        getchar();
        switch(x)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            mostrar();
            break;
        case 3:
            break;
        }
    }while(x!=3);
    return 0;
}

void cadastrar ()
{
    FILE * arquivo;
    char nome[256];
    int idade;
    float altura;
    printf("Entre com o nome: ");
    fgets(nome, 256, stdin);
    printf("Entre com a idade: ");
    fscanf(stdin, "%d", &idade);
    printf("Entre com a altura(metros): ");
    fscanf(stdin, "%f", &altura);
    arquivo = fopen("info.txt", "w");
    fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura);
    fclose(arquivo);
    system("pause");
}

void mostrar ()
{
    FILE * arquivo;
    char nome[256];
    int idade;
    float altura;
    arquivo = fopen("info.txt", "r");
    fscanf(arquivo, "%s\n%d\n%f\n", nome, &idade, &altura);
    fclose(arquivo);
    fprintf(stdout, "Nome: %s\n", nome);
    fprintf(stdout, "Idade: %d\n", idade);
    fprintf(stdout, "Altura: %f\n", altura);
    system("pause");
}