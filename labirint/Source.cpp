#include "window.h"
#include "tile.h"
#include <time.h>  
#include <iostream>


int main(int argc, char* args[])
{	
	srand(time(NULL));

	Window window("Labirint", 800, 600);
	while (!window.isClosed()) {
		window.pollEvents();
		window.clear();
	}
	

	Tile tmp = Tile();
	tmp.print();

	return 0;
}