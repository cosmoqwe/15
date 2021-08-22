#include<iostream>
#include<string>
using namespace std;
struct computer
{
	string motherboard;
	string cpu;
	string gpu;
	string ram;
	string hdd;
	string ssd;
};
void add(computer& pk1)
{
	getline(cin, pk1.motherboard);
	getline(cin, pk1.cpu);
	getline(cin, pk1.gpu);
	getline(cin, pk1.ram);
	getline(cin, pk1.hdd);
	getline(cin, pk1.ssd);
}
void print(computer& pk1)
{
	cout << "Motherboard:" << pk1.motherboard << endl;
	cout << "CPU:" << pk1.cpu << endl;
	cout << "GPU:" << pk1.gpu << endl;
	cout << "RAM:" << pk1.ram << endl;
	cout << "HDD:" << pk1.hdd << endl;
	cout << "SSD:" << pk1.ssd << endl;
}
void main()
{
	computer pk1;
	add(pk1);
	print(pk1);
}