#pragma once
#define FELINE_H
class Feline :public Animal 
{
public:
	static int count;
	Feline();
	~Feline();
	string speak();
};

string Feline::speak()
{
	return "PURR";
}

Feline::Feline(){}
