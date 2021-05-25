//Progression_Amount.h
#pragma once
#include<iostream>
using namespace std;
class Abstract
{
private:
	int a;
public:
	Abstract();
	Abstract(int a);

	int GetA()const { return a; }
	void SetA(int value) { a = value; }

	virtual double Sum_progression() = 0;
	virtual void Print() = 0;
};