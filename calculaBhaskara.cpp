#include<math.h>
#include<iostream>
using namespace std;

float calc_delta(float va, float vb, float vc)
{
	return srqt(pow(vb,2)-4*va*vc);
}
float calc_2a(float val_a)
{
	return 2*val_a;
}
void calc_raiz(float a, float b, float c, float &x1, float &x2)
{
	float delta, denominador;
	delta = calc_delta(a,b,c);
	denominador = calc_2a(a);
	x1 = (-b + delta)/denominador;
	x2 = (-b - delta)/denominador;
}
int main()
{
	float val_a, val_b, val_c, raiz2, raiz2;
	cout<<"Valor de a: ";
	cin>>val_a;
	cout<<"Valor de b: ";
	cin>>val_b;
	cout<<"Valor de c: ";
	cin>>val_c;
	calc_raiz(val_a, val_b, val_c, raiz1, raiz2);
	cout<<"Primeira raiz: " <<raiz1;
	cout<<"Segunda raiz: "<<raiz2;
	return 0;
}s