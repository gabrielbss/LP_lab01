/**
* @file 	main.cpp
* @brief 	Programa que recebe um valor inteiro e retorna
			o maior número primo anterior ao fatorial do
			valor recebido
* @details	Figuras geométricas planas possuem apenas área e 
*			perímetro. As espaciais não possuem perímetro
 * @author	Gabriel Barbosa
 * @since	17/08/2017
 * @date	17/08/2017
 */

#include <iostream>
#include <cstdlib>

#include "fatorial.h"
#include "primalidade.h"

using std::cout;
using std::endl;

int main (int argc, char* argv[]) {
	int n;
	n = atoi(argv[1]);
	n = fatorial(n);
 	cout << maior_primo(n, (int)sqrt(n)) << endl; // testa da raiz quadrada para baixa
	return 0;
}