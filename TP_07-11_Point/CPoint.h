#pragma once
class CPoint
{
private:
	float fX;
	float fY;

public:
	CPoint(float, float);
	void Deplace(float, float);
	float Abscisse();
	float Ordonnee();
	void Homothetie(float);
	float Rho(CPoint);
	float Theta(float);
	void Rotation(float);
};

