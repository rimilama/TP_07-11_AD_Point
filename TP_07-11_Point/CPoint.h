#pragma once
class CPoint
{
private:
	float fX;
	float fY;

public:
	CPoint(float, float);
	void Deplace(float, float);
	void Affiche();
};

