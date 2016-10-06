//This is what I have so far
#pragma once
#define ANIMAL_H
class Animal 
{
public:
	static int count;
	Animal();
	~Animal();
	string *Animals[2];
	virtual string speak() = 0;
private:

};
