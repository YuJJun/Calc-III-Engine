#include "stdafx.h"
#include "Vec3D.h"

//--------------------------------------

float Vec3D::getX() const
{
	return x;
}

float Vec3D::getY() const
{
	return y;
}

float Vec3D::getZ() const
{
	return z;
}

//--------------------------------------

void Vec3D::setX(float xCoord)
{
	x = xCoord;
}

void Vec3D::setY(float yCoord)
{
	y = yCoord;
}

void Vec3D::setZ(float zCoord)
{
	z = zCoord;
}

//---------------------------------------

ostream& operator<< (ostream& output, const Vec3D& v)
{
	output << "<" << v.getX() << ", " << v.getY() << ", " << v.getZ() << ">";
	
	return output;
}

istream& operator>> (istream& input, Vec3D& v)
{
	float x, y, z;
	input >> x >> y >> z;

	v.setX(x);
	v.setY(y);
	v.setZ(z);

	return input;
}

//--------------------------------------------

//Finds the dot product
float Vec3D::dotProduct(const Vec3D& v) const
{
	float dotProd = (this -> getX() * v.getX()) + (this -> getY() * v.getY()) + (this -> getZ() * v.getZ());
	return dotProd;
}

//Scalar Multplication. Takes in a scalar and multiplies it by a vector
Vec3D Vec3D::scalarMult(float scalar) const
{
	Vec3D v;

	v.setX(this -> getX() * scalar);
	v.setY(this -> getY() * scalar);
	v.setZ(this -> getZ() * scalar);

	return v;
}

//Vector Addition. Takes in a vector V and adds it with the original vector
Vec3D Vec3D::vecAdd(Vec3D v) const
{
	Vec3D sum;

	sum.setX(this -> getX() + v.getX());
	sum.setY(this -> getY() + v.getY());
	sum.setZ(this -> getZ() + v.getZ());

	return sum;
}

//Vector Magnitude. Finds the magnitude of vector
float Vec3D::vecMag() const
{
	float mag = sqrt(pow(this->getX(), 2) + pow(this->getY(), 2) + pow(this->getZ(), 2)); //3D Pythagorean theorem
	return mag;

}

//Cross product. Finds the perpendicular vector of two vectors on a plane
Vec3D Vec3D::crossProduct(Vec3D v) const
{
	Vec3D product;

	product.setX((this->getY() * v.getZ()) - (v.getY() * this->getZ()));
	product.setY(-((this->getX() * v.getZ()) - (v.getX() * this->getZ())));
	product.setZ((this->getX() * v.getY()) - (v.getX() * this->getY()));

	return product;
}