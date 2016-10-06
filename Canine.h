#pragma once
#define CANINE_H
class Canine :public Animal
{
public:
	static int count;
	Canine();
	~Canine();
	string speak();
};

string Canine::speak()
{
	return "WOOF";
}

Canine::Canine(){}
