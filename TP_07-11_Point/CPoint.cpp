#include "CPoint.h"
#define _USE_MATH_DEFINES
#include <math.h>

CPoint::CPoint(float fX, float fY) {
	this->fX = fX;
	this->fY = fY;
}

void CPoint::Deplace(float fX, float fY) {
	this->fX = fX;
	this->fY = fY;
}

float CPoint::Abscisse() {
	return this->fX;
}

float CPoint::Ordonnee() {
	return this->fY;
}

void CPoint::Homothetie(float fK) {
	this->fX = fK * this->fX;
	this->fY = fK * this->fY; 
}

float CPoint::Rho(CPoint Centre) {
	float distance = sqrt(pow(this->fX - Centre.fX, 2) + pow(this->fY - Centre.fY, 2));
	return distance;
}

float CPoint::Theta(float fR) {
	float Alpha = 2 * atan((this->fY / fR) / (1 + (this->fX / fR)));
	return Alpha;
}

void CPoint::Rotation(float Alpha) {
	Alpha *= M_PI / 180;
	this->fX = this->fX * cos(Alpha) + this->fY * sin(Alpha);
	this->fY = - this->fX  * sin(Alpha) + this->fY * cos(Alpha);
}
