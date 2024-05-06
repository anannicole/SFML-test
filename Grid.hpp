#ifndef grid_h
#define grid_h
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
using namespace std;

class Grid{
private:
vector<vector<int>> grid; //esto es para crear una cuafricula, cada vector es una columna creo 
int rows, cols;
int sizeX, sizeY;
Vector2i size;


public:
Grid(int rows, int cols);
Grid(int rows, int cols, int width, int height);
void drawTo(RenderWindow &window); //esto quier decir que estoy dibujando el grip nen la pantalla 
void click(int x, int y);

};

#endif