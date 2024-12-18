#include "Shape.h"

Shape::Shape() : _area(0), _perimeter(0)
{

}

float Shape::get_area() const
{
	return _area;
}

void Shape::set_area(float area)
{
	this->_area = area;
}
