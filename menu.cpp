#include <iostream>
#include "menu.h"
#include "iniciar juego.h"
#include "ajustes.h"
#include "niveles.h"
#include "tienda.h"

using namespace std;

void menu() {	

	bool salir = false;
	
	while(salir == false) {
		int opcion;
		
		cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "1 - iniciar juego" << endl;
		cout << "2 - ajustes" << endl;
		cout << "3 - niveles" << endl;
		cout << "4 - tienda" << endl;
		cout << "5 - salir" << endl;
		cout << endl;
		cout << endl;				
		cout << "Ingrese la opcion y presione enter --> ";
		cin >> opcion;
		
		switch(opcion) {
			case 1:
				iniciar juego();
				break;	
			case 2:
				ajustes();
				break;
			case 3:
				niveles();
				break;
			case 4:
				tienda();
				break;
			case 5:
				salir = true;	
			default: 		
				break;
		}
		
		 system("CLS");		
	}
}

