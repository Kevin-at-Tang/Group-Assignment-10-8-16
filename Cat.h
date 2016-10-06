#pragma once
#define CAT_H
class Cat :public Feline 
{
private:
	string name;
public:
	Cat();
	~Cat();
	string Name(string name);
	string getName(string);
};

string Cat::getName(string)
{
	return name;
}
