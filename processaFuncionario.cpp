#include<iostream>
using namespace std;

float salario_base(float val_hora_trab, float qtd_hora_trab)
{
	return val_hora_trab * qtd_hora_trab;
}

float calc_bonus(int tempo_servico, float salario_base)
{
	return salario_base * 0.02 * tempo_servico;
}
float auxilio_creche(int qtd_depen)
{
	return qtd_depen * 21.00;
}
float calc_inss(float salario_base)
{
	float des;
	if(salario_base<=1751.81)
		des = salario_base * 0.08;
	else
		if(salario_base<=2919.72)
			des = salario_base * 0.09;
		else
		{
			des = salario_base * 0.11;
			if(des>642.34)
				des = 642.34;
		}
		return des;
}

float calc_imposto(float salario_base)
{
	float desconto;
	if(salario_base<=1800.00)
		desconto = 0;
	else
		if(salario_base <=2900.00)
			desconto = salario_base * 0.15;
		else
			desconto = salario_base * 0.275;
	return desconto;
}

int main()
{
	int mat, qht, qdep, ts;
	float vht, sal_base, bonus, aux_creche, inss, imposto;
	float sal_liquido;
	cout<<"Forneca sua matricula: ";
	cin>>mat;
	cout<<"Valor da hora de trabalho: ";
	cin>>vht;
	cout<<"Quantidade de horas trabalhadas: ";
	cin>>qht;
	cout<<"Quantidade de dependentes: ";
	cin>>qdep;
	cout<<"Tempo de servivo em ano: ";
	cin>>ts;
	sal_base = salario_base(vht, qht);
	bonus = calc_bonus(ts, sal_base);
	aux_creche = auxilio_creche(qdep);
	inss = calc_inss(sal_base);
	imposto = calc_imposto(sal_base);
	sal_liquido = sal_base + bonus + aux_creche - inss - imposto;
	cout<<"Matricula: "<<mat;
	cout<<"Salario base: "<<sal_base;
	cout<<"Bonus: "<<bonus;
	cout<<"Auxilio creche: "<<aux_creche;
	cout<<"Desconto inss: "<<inss;
	cout<<"Imposto de renda: "<<sal_liquido;
	return 0;



}