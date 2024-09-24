#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    int idade[1];
    struct Aluno{
        char nome[60];
        char curso[80];
        int anon;
        int matricula;
    }strAluno[1];


        for(i=0;i<1;i++)
        {
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe o curso do aluno: ";
        cin.getline(strAluno[i].curso, 80);
        cout << "Informe o ano de nascimento do aluno: ";
        cin >> strAluno[i].anon;
        cout << "Informe a matricula do aluno: ";
        cin >> strAluno[i].matricula;
        cout << endl;
        idade[i] = (2024 - strAluno[i].anon);
        fflush(stdin);
        }

        cout << "Matrícula feita com sucesso!!" << endl;

        for(i=0;i<1;i++)
        {
        cout << "Nome: " << strAluno[i].nome << endl;
        cout << "Curso: " << strAluno[i].curso << endl;
        cout << "Idade: " << idade[i] << endl;
        cout << "Matricula: " << strAluno[i].matricula << endl;
        }







    return 0;
}
