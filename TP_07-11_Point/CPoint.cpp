#include "CPoint.h"

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