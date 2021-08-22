#include<iostream>
#include<string>
using namespace std;
struct car
{
	double length;
	double clirens;
	double volume;
	double power;
	double wheeldiameter;
	string color;
	string transmission;
};
void add(car& car1)
{
	cout << "Input length:";
	cin >> car1.length;
	cout << "Input clirens:";
	cin >> car1.clirens;
	cout << "Input volume:";
	cin >> car1.volume;
	cout << "Input power:";
	cin >> car1.power;
	cout << "Input wheel diameter:";
	cin >> car1.wheeldiameter;
	cout << "Input color:";
	cin.ignore();
	getline(cin, car1.color);
	cout << "Input transmission:";
	getline(cin, car1.transmission);
}
void print(car& car1)
{
	cout << "Length:" << car1.length << endl;
	cout << "Clirens:" << car1.clirens << endl;
	cout << "Volume:" << car1.volume << endl;
	cout << "Power:" << car1.power << endl;
	cout << "Wheel diameter:" << car1.wheeldiameter << endl;
	cout << "Color:" << car1.color << endl;
	cout << "Transmission:" << car1.transmission << endl;
}
void main()
{
	car car1;
	add(car1);
	print(car1);
}