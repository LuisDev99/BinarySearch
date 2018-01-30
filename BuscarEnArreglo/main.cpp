#include <iostream>

void main() {

	int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 , 18, 19, 20  };
	int num = 0, dec;

	do {
		std::cout <<std::endl<< "Ingrese un numero a buscar: ";
		std::cin >> num;

		std::cout << "Ingrese el algoritmo a usar" << std::endl << "1. Busqueda secuencial" << std::endl << "2. Busqueda Binaria" << std::endl <<"3. Salir"<<std::endl<< "Ingrese: ";
		std::cin >> dec;

		if (dec == 2) {
			int pivote_central = 9, inicio = 1, fin = 20;

			bool encontrado = false;

			while (!encontrado && pivote_central < 20) {

				if (num == arr[pivote_central]) {
					std::cout << "Exito" << std::endl;
					encontrado = true;
					break;
				}
				else {
					if (num > arr[pivote_central]) {
						inicio = pivote_central + 1;
					}
					else {
						fin = pivote_central - 1;
					}
				}
				pivote_central = (fin + inicio) / 2;
				//std::cout << "Running";
			}
			if (!encontrado)
				std::cout << "Numero no encontrado" << std::endl;
		}
		else if (dec == 1) {

			for (unsigned int i = 0; i < 20; i++)
			{
				if (arr[i] == num) {
					std::cout << "Exito!" << std::endl;
					break;
				}
			}

		}
	} while (dec != 3);


}