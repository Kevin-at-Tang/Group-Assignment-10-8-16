#pragma once
#define DOG_H
class Dog :public Canine 
{
private:
	string name;
public:
	string Name();
	string Name(string name);
	string getName(string);
};

string Dog::getName(string)
{
	return name;
}
