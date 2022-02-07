#include <iostream>
using namespace std;

int cria_numero(int x, int y)
{
	int numero;
	numero = (x * 100) + y;
	return numero;
}

int main()
{
	int matricula, dia, mes, ano, senha_dia;
	int senha_mes, senha_biblioteca;

	cout<<"Forneca a matricula: ";
	cin>>matricula;
	cout<<"Dia do nascimento: ";
	cin>>dia;
	cout<<"Mes do nascimento: ";
	cin>>mes; 
	cout<<"Ano do nascimento: ";
	cin>>ano;
	senha_dia = cria_numero(dia, mes);
	senha_mes = cria_numero(mes, dia);
	senha_biblioteca = senha_dia + senha_mes + ano;
	cout<<"A senha inicial da biblioteca e: " <<senha_biblioteca;
	return 0; 
}