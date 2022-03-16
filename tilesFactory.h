#pragma once
#include "tiles.h"

class tilesFactory
{
public:
	tile* getTile(string type) /*int X, int Y)*/
	{
		/*tiles* output;*/
		if (type == "ordinaryTile")
		{
			/*output = new ordinaryTile;
			output->setKoordinat(X, Y);*/
			return new ordinaryTile();
		}
		else if (type == "TNT")
		{
			/*output = new TNTTile;
			output->setKoordinat(X, Y);*/
			return new TNTTile();
		}
		else if (type == "Rocket")
		{
			/*output = new Rocket;
			output->setKoordinat(X, Y);*/
			return new Rocket();
		}
	}
};
