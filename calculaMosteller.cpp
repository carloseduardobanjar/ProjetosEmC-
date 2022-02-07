#include <iostream>
using namespace std;

float area_corporal(float peso, int altura)
{
	float area;
	area = sqrt(peso * altura) / 60;
	return area;
}

int main()
{
	float mosteller, p;
	int h;
	cout<<"Peso de um adulto: ";
	cin>>p;
	cout<<"Altura do mesmo adulto: ";
	cin>>h;
	mosteller = area_corporal(p, h);
	cout<<"Area corporal: " <<mosteller;
	return 0;
}