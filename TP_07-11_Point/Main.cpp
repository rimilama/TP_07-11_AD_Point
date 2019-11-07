#include "CPoint.h"
#include <iostream>

using namespace std;

int main() {
	CPoint MonPremierPoint(3.5, 4.25);


	cout << "L'abscisse du point est : " << MonPremierPoint.Abscisse() << " et son ordonnee est : " << MonPremierPoint.Ordonnee() << endl;
	MonPremierPoint.Deplace(10.5, 1.2);
	cout << "L'abscisse du point est : " << MonPremierPoint.Abscisse() << " et son ordonnee est : " << MonPremierPoint.Ordonnee() << endl;



	return 0;
}