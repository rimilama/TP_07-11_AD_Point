#include "CPoint.h"
#include <iostream>
using namespace std;

CPoint::CPoint(float fX, float fY) {
	this->fX = fX;
	this->fY = fY;
}

void CPoint::Deplace(float fX, float fY) {
	this->fX = fX;
	this->fY = fY;
}

void CPoint::Affiche() {
	cout << "Les coodronnee du point sont : \nX : " << this->fX << "\nY : " << this->fY << endl;
}