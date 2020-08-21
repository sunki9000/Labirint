#pragma once

class Tile {
public:
	Tile();
	~Tile();
	void print();
	void rotate();
private:
	int _polja[3][3];
};