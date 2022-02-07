#include <iostream>
using namespace std;

float calc_funcionario(int qtd_funcionario)
{
    int cont, matr;
    float sal, maior_salario;
    cont=0;
    maior_salario=0;
    while (cont<qtd_funcionario)
    {
        cout<<"Forneca a matricula do funcionario:";
        cin>>matr;
        cout<<"Forneca o salario do funcionario:";
        cin>>sal;
        if (sal>maior_salario)
            maior_salario= sal;
        cont=cont+1;
    }
    return maior_salario;
}

int main ()
{
    int qtd_fun;
    float funcionario;
    cout<<"Forneca a quantidade de funcionarios:";
    cin>>qtd_fun;
    funcionario=calc_funcionario (qtd_fun);
    cout<<"O maior salario e:"<<funcionario;
    return 0;
}
