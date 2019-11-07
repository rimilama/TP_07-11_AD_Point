#include "CPoint.h"

int main() {
	CPoint MonPremierPoint(3.5, 4.25);

	MonPremierPoint.Affiche();
	MonPremierPoint.Deplace(10.5, 1.2);
	MonPremierPoint.Affiche();



	return 0;
}