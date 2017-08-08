// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;
//Clase punto
class punto
{
public:
	//Constructores
	punto(int _x, int _y, int _z) 
	{
		x = _x;
		y = _y;
		z = _z;
		dim = "tres dimensiones";
	}
	punto(int _x, int _y)
	{
		x = _x;
		y = _y;
		z = 0;
		dim = "dos dimensiones";
	}
	punto()
	{
		x = 0;
		y = 0;
		z = 0;	
		dim = "no dimesiones";
	}
	//getters y setters
	void setX(int _x)
	{
		x = _x;
	}
	void setY(int _y)
	{
		y = _y;
	}
	void setZ(int _z)
	{
		z = _z;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getZ()
	{
		return z;
	}
	string getDim()
	{
		return dim;
	}
private:
	//Variables
	int x;
	int y;
	int z;
	std::string dim = "";


};
int main() //Main para probar la clase
{
	punto myP(3,2,1);
	std::cout << "Coordenadas (" << myP.getX() << ","<< myP.getY()<<","<<myP.getZ()<<") \n";
	std::cout << "El punto esta en "<< myP.getDim() << std::endl;
	punto myP2(2, 2);
	std::cout << "Coordenadas (" << myP2.getX() << "," << myP2.getY() << "," << myP2.getZ() << ") \n";
	std::cout << "El punto esta en " << myP2.getDim() << std::endl;
	punto myP3;
	std::cout << "Coordenadas (" << myP3.getX() << "," << myP3.getY() << "," << myP3.getZ() << ") \n";
	std::cout << "El punto esta en " << myP3.getDim() << std::endl;
}

