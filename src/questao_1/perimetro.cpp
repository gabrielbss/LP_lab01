/**
 * @file	calcperimetro.cpp
 * @brief	Arquivo de corpo contendo a implementacao das funções que 
 *			solicitam ao usuário os dados necessários ao cálculo do perimetro
 *			da figura geométrica e chamam as funções que realizam essa operação
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 * @sa		calcperimetro.h
 */


#include <iostream>
#include "perimetro.h"

using std::cout;
using std::endl;


/**\defgroup Figuras_Planas_Imprime_Perimetro
 * @brief	Resultados dos cálculos dos perímetros
 * @{
 * @fn 		void calcPerimetroTriangulo(float& base)
 * @brief	Funcao que imprime o valor do perimetro do triangulo
 * @param	base BASE valor da base do triangulo
 */
void calcPerimetroTriangulo(float& base) {
	cout << "O perímetro do triângulo é: " << base * 3 << endl;
}


/** 
 * @brief	Funcao que imprime o valor do perimetro do retangulo
 * @param	base BASE valor da base do retangulo
 * @param	altura ALTURA valor da altura do retangulo
 */
void calcPerimetroRetangulo(float& base, float& altura) {
	cout << "O perímetro do retângulo é: " << 2 * (base  + altura) << endl;
}


/** 
 * @brief	Funcao que imprime o valor do perimetro do quadrado
 * @param	base BASE valor da base do quadrado
 */
void calcPerimetroQuadrado(float& base)	 {
	cout << "O perímetro do quadrado é: " << 4 * base << endl;
}


/** 
 * @brief	Funcao que imprime o valor do perimetro do circulo
 * @param	base BASE valor da base do circulo
 */
void calcPerimetroCirculo(float& raio) {
	cout << "O perímetro do círculo é: " << 2 * 3.14 * raio << endl;
}
///@}