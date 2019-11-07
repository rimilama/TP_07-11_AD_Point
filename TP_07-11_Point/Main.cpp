#include "CPoint.h"
#include <iostream>

using namespace std;

int main() {
	CPoint MonPremierPoint(6, 0);
	CPoint Centre(0, 0);
	
	cout << "L'homotethie de mon point(" << MonPremierPoint.Abscisse() << ";" << MonPremierPoint.Ordonnee() << ") avec le rapport k=4.2" << endl;
	MonPremierPoint.Homothetie(4.2);
	cout << "donne le point(" << MonPremierPoint.Abscisse() << "; " << MonPremierPoint.Ordonnee() << ")\n" << endl;

	float fR = MonPremierPoint.Rho(Centre);
	float fAlpha = MonPremierPoint.Theta(fR);
	cout << "Les coordonnee polaire de mon point(" << MonPremierPoint.Abscisse() << ";" << MonPremierPoint.Ordonnee() << ") sont (" << fR << ";" << fAlpha << ")" << endl;
	
	cout << "La rotation de mon point(" << MonPremierPoint.Abscisse() << ";" << MonPremierPoint.Ordonnee() << ") avec angle Alpha=90" << endl;
	MonPremierPoint.Rotation(90);
	cout << "donne le point(" << MonPremierPoint.Abscisse() << "; " << MonPremierPoint.Ordonnee() << ")" << endl;
	
	

	return 0;
}