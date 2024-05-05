#include "Grid.hpp"


Grid::Grid(int rows, int cols)
{
    this->rows=rows; //aqui solo iniializas las variables rols y cols que ya creaste en el .hpp
    this->cols=cols;

for (int i =0; 1<rows; i++) //esto es para llenar la cuaf¿dricula con 0 
{
    this->grid.push_back({});
    for(int j=0; j < cols; j++) // a mi vector de vectores que crea el grid le estoy pasando un vector vacio para crear las filas 
    {
        this->grid[i].push_back(0); //ya que ya creaste la primer fila entra a este for para ahora crear las columnas en la fila usando un vector vacio o sea (un cuadrito vacio para meter algo)

    }
}


}

void Grid:: drawTo(RenderWindow &window)
{


for (int i =0; 1<rows; i++) //esto es para llenar la cuaf¿dricula con 0 
{
    
    for(int j=0; j < cols; j++) // a mi vector de vectores que crea el grid le estoy pasando un vector vacio para crear las filas 
    {
       RectangleShape cuadrado(Vector2f(50.f, 50.f));
       cuadrado.setOutlineThickness(5.f);
       cuadrado.setOutlineColor(Color::White);
       cuadrado.setPosition(200.0f, 200.0f);
       
       
       
        //crear un cuadrado (RectangleShape)
       // Le damos un bode con outline thickness y color 
       // fijamos su posicion al lugar correspndiente 
        
    }
}
}