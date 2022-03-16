#pragma once
#include <iostream>
using namespace std;

class tile
{
private :
	int koordinat[2];
public : 
	virtual ~tile() = default;
	virtual void draw() = 0;
	virtual void use() = 0;
	void setCoord(int x, int y)
	{
		koordinat[0] = x;
		koordinat[1] = y;
	}
};

class ordinaryTile:public tile 
{
public:
	void draw()
	{
		cout << "O";
	}
	void use() {};
};

class TNTTile:public tile 
{
public:
	void draw()
	{
		cout << "T";
	}
	void use() 
	{
		cout << "Bomb is Exploded "; 
	}
};

class Rocket:public tile
{
public:
	void draw()
	{
		cout << "R";
	}
	void use() 
	{
		cout << "Rocket is Exploded "; 
	};
};
