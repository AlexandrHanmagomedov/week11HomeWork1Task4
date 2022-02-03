/*
Задание 4. Написать функцию, выводящую на экран
переданную ей игральную карту.
	cout << (char)03 << endl;-черви
	cout << (char)04 << endl;-буби
	cout << (char)05 << endl;-крести
	cout << (char)06 << endl;-пики

*/
#include<iostream>
#include<Windows.h>

using namespace std;
void kart(int vib1, int nom1)
{

	char karta [14] = { 'jokr','A','2','3','4','5','6','7','8','9','10','J','Q','K' };//'jokr чтобы обращение было с 1го элемента массива , а не с 0
    
	cout << "_____\n";
	if (nom1 == 10) {
		cout << "| 1" << karta[nom1] << "|" << endl;
	}
	else {
		cout << "| " << karta[nom1] << " |" << endl;
	}
	switch (vib1)
	{
	case 1: cout << "| " <<(char)03 << " |" << endl;
		break;
	case 2: cout << "| " <<(char)04 << " |" << endl;
		break;
	case 3: cout << "| " <<(char)05 << " |" << endl;
		break;
	case 4: cout << "| " <<(char)06 << " |" << endl;
		break;
	}
	cout << "-----\n";

}

int main()
{
	int vib;
	int nom;

	cout << "Vvedite mast` \n\t1 - "<< (char)03 <<"\n\t2 - " <<(char)04<<"\n\t3 - "<<(char)05<<"\n\t4 - "<<(char)06 << endl;
	cin >> vib;
	cout << "Vvedite kartu \n\t1 - Ace,\t2 - Two,\t3 - Three\n\t4 - Four,\t5 - Five,\t6 - Six\n\t7 - Seven,\t8 - Eight,\t9 - Nine\n\t10 - Ten,\t11 - Jack,\t12 - Queeeen,\t13 - King" << endl;
	cin >> nom;
	kart(vib, nom);

}