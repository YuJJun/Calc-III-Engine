#pragma once
#include <iostream>

using namespace std;


class Vec3D
{
	public:

		float getX() const;
		float getY() const;
		float getZ() const;

		void setX(float);
		void setY(float);
		void setZ(float);

		float dotProduct(const Vec3D& v) const; //Dot product
		Vec3D scalarMult(float scalar) const; //Scalar multiplication
		Vec3D vecAdd(Vec3D v) const; //Vector addition
		float vecMag() const; //Vector magnitude
		Vec3D crossProduct(Vec3D v) const; //Cross product

	private:

		float x, y, z; //x, y, z coordinates

};

ostream& operator<< (ostream& output, const Vec3D& v);
istream& operator>> (istream& input, Vec3D& v);