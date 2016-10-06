/*
Group 34 Assignment 2
Anthony Alvarez
Kevin Tang
Naina Sakruti
*/

#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
#include "Canine.h"
#include "Feline.h"
#include "Dog.h"
#include "Wolf.h"
#include "Cat.h"

void main()
{
	string nameDog, nameCat;
	cout << "What is the Dog's name: ";
	cin >> nameDog;
	cout << "What is the Cat's name: ";
	cin >> nameCat;

	Dog a = Animal::Animals[0];
	Wolf b;
	Cat c;



	a.getName(nameDog);
	c.getName(nameCat);

	b.Howl();
	
	system("pause");
}
