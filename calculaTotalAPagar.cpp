#include <iostream>
using namespace std;

float converte_moeda(float valor, float cotacao)
{
	float conversao;
	conversao = valor * cotacao;
	return conversao;
}
int main()
{
	float valor_real, valor_dolar, valor_euro, valor_total;
	float cotacao_dolar, cotacao_euro, converte_dolar, converte_euro;
	cout<<"Valor da compra em real: ";
	cin>>valor_real;
	cout<<"Valor da compra em dolar: ";
	cin>>valor_dolar;
	cout<<"Valor da compra em euro: ";
	cin>>valor_euro;
	cout<<"Valor da cotacao do dolar: ";
	cin>>cotacao_dolar;
	cout<<"Valor da cotacao do euro: ";
	cin>>cotacao_euro;
	converte_dolar = converte_moeda(valor_dolar, cotacao_dolar);
	converte_euro = converte_moeda(valor_euro, cotacao_euro);
	valor_total = converte_dolar + converte_euro + valor_real;
	cout<<"Valor total em real: " <<valor_total;
	return 0; 


}