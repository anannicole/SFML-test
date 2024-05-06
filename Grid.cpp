#include "Grid.hpp"



Grid::Grid(int rows, int cols)
{
    this->rows=rows; //aqui solo iniializas las variables rols y cols que ya creaste en el .hpp
    this->cols=cols;

for (int i =0; i<rows; i++) //esto es para llenar la cuaf¿dricula con 0 
{
    this->grid.push_back({});
    for(int j=0; j < cols; j++) // a mi vector de vectores que crea el grid le estoy pasando un vector vacio para crear las filas 
    {
        this->grid[i].push_back(0); //ya que ya creaste la primer fila entra a este for para ahora crear las columnas en la fila usando un vector vacio o sea (un cuadrito vacio para meter algo)

    }
}


}

Grid::Grid(int rows, int cols, int width, int height)
{
    this->rows=rows; //aqui solo iniializas las variables rols y cols que ya creaste en el .hpp
    this->cols=cols;
    this->sizeX= width / cols; // aqui es para sacar la medida de cada celda dividiendo el width del rectangulo que es 400 o sea el frame entre las columnas que ouse que quiro 
    this->sizeY= height / rows;
    

for (int i =0; i<rows; i++) //esto es para llenar la cuaf¿dricula con 0 
{
    this->grid.push_back({});
    for(int j=0; j < cols; j++) // a mi vector de vectores que crea el grid le estoy pasando un vector vacio para crear las filas 
    {
        this->grid[i].push_back(rand()%2); //ya que ya creaste la primer fila entra a este for para ahora crear las columnas en la fila usando un vector vacio o sea (un cuadrito vacio para meter algo)

    }
}


}

void Grid:: drawTo(RenderWindow &window)
{


for (int i =0; i<rows; i++) //esto es para llenar la cuaf¿dricula con 0 
{
    
    for(int j=0; j < cols; j++) // a mi vector de vectores que crea el grid le estoy pasando un vector vacio para crear las filas 
    {
       RectangleShape cuadrado(Vector2f(this->sizeX,this->sizeY));
       cuadrado.setOutlineThickness(1);
       cuadrado.setOutlineColor(Color::White);
       cuadrado.setPosition(Vector2f(j*this->sizeX,i*this->sizeY));
       if(grid[j][i] == 0)
    
       cuadrado.setFillColor(Color(77,66,110));
       if(grid[j][i] == 1)

       cuadrado.setFillColor(Color::Magenta);
       
       window.draw(cuadrado);       
       
       
        //crear un cuadrado (RectangleShape)
       // Le damos un bode con outline thickness y color 
       // fijamos su posicion al lugar correspndiente 
        
    }
}
}

void Grid::click(int x, int y){
    
}