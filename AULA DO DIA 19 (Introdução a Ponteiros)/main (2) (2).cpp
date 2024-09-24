#include <iostream>
#include <locale.h>

using namespace std;

void situacao(double *nota, string *ptrSit)
{
    if(*nota >= 60)
        *ptrSit = "Aprovado!";
    else
        *ptrSit = "Reprovado!";
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome,disc,*ptrNome,sit;
    double nota,*ptrNota;
    int c;

    ptrNota = &nota;
    ptrNome = &nome;


    cout << "Informe o nome do aluno: ";
    cin >> nome;
    cout << "Informe a nota do aluno: ";
    cin >> nota;
    cout << "Informe a matéria que o aluno tirou essa nota: ";
    cin >> disc;
    cout << "---------------------------------------------------------" << endl;

    situacao(&nota, &sit);

    cout << "Nome do aluno: " << *ptrNome << endl;
    cout << "Nota do aluno: " << *ptrNota << endl;
    cout << "Matéria: " << disc << endl;
    cout << "Situação: " << sit;

    return 0;
}
