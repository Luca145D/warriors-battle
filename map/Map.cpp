#include <iostream>
#include <string>

#include "Map.h"

using namespace std;

//constructor
Map :: Map(int _height, int _width){
	
	height = _height;
	width  = _width;

	map = new string [height * width];
}

//function methods

//fill the created map with the given simbol
void Map::fill(char letter){

	padding = letter;
	for (int row = 0; row < height; row++){
		for (int column = 0; column < width; column++){

			map[row][column] = letter;
		}
	}
}

void Map::set(int row, int column, char letter){

	map[row][column] = letter;
}

//print map
void Map::print(){


	for (int column = 0; column < width; column++){
		printf("%s%d", column == 0 ? "   " : "  ", column);
	}
	cout << endl;
	for (int row = 0; row < height; row++){

		cout << row;
		for (int column = 0; column < width; column++){

			cout << "  " << map[row][column];
		}
		cout << endl;
	}
	cout << endl;

}

