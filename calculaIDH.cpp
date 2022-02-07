#include<iostream>
using namespace std;

float calc_idh(float e, float l, float r)
{
	if(e >= l + r)
		return idh = e * l * r/((e + l + r)/3);
	else
		return idh = (e + l + r)/3;
}
int main()
{
	float edu, lon, riq, idh;
	cout<<"Valor da dimensao educacao: ";
	cin>>edu;
	cout<<"Valor da dimensao longevidade: ";
	cin>>lon;
	cout<<"Valor da dimensao riqueza: ";
	cin>>riq;
	idh = calc_idh(edu, lon, riq);
	cout<<"Indice de desenvolvimento humano " <<idh;
	return 0; 
}
