#include "tile.h"
#include <stdlib.h>    
#include <iostream>

Tile::Tile()  {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			_polja[i][j] = rand() % 2;
		}
	}
}

Tile::~Tile() {
	
}

void Tile::print() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << _polja[i][j]<<" ";
		}
		std::cout <<"\n";
	}
}

void Tile::rotate() {

}