/**
 * @file	calcarea.cpp
 * @brief	Arquivo cabeçalho contendo a implementação das funções que solicitam
 *			ao usuário os dados necessários para o cálculo da área com a figura
 *			geométrica e chamam as funções que realizam essa operação
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 * @sa 		calcarea.h
 */

#include <iostream>
#include "calcula.h"

using std::cin;
using std::endl;
using std::cout;


/**\defgroup Figuras_Planas_Imprime_Area
 * @brief   Resultados dos cálculos das 
 *			áreas das figuras planas
 * @{
 * @fn 		void calcAreaTriangulo(float& base)
 * @brief 	Função que imprime o valor da área do triângulo
 * @param 	base BASE valor da base do triângulo
 */
void calcAreaTriangulo(float& base) {
	cout << "Digite a base para o triângulo: ";
	cin >> base;
	cout << endl;
	cout << "A área do triângulo é: " << trianguloArea(base) << endl;
	cout << endl;
}

/** 
 * @brief 	Função que imprime o valor da área do retângulo
 * @param 	base BASE valor da base do retângulo
 * @param 	altura ALTURA valor da altura do retângulo
 */
void calcAreaRetangulo(float& base, float& altura) {
	cout << "Digite a base para o retângulo: ";
	cin >> base;
	cout << endl;
	cout << "Digite a altura para o retângulo: ";
	cin >> altura;
	cout << endl;
	cout << "A área do retângulo é: " << retanguloArea(base, altura) << endl;
	cout << endl;
}

/** 
 * @brief 	Função que imprime o valor da área do quadrado
 * @param 	base BASE valor da base do quadrado
 */
void calcAreaQuadrado(float& base) {
	cout << "Digite a base para o quadrado: ";
	cin >> base;
	cout << endl;
	cout << "A área do quadrado é: " << quadradoArea(base) << endl;
	cout << endl;
}

/** 
 * @brief 	Função que imprime o valor da área do círculo
 * @param 	base BASE valor da base do círculo
 */
void calcAreaCirculo(float& raio) {
	cout << "Digite o raio do círculo: ";
	cin >> raio;
	cout << endl;
	cout << "A área do círculo é: " << circuloArea(raio) << endl;
	cout << endl;

}

///@}

/**\defgroup Figuras_Espaciais_Imprime_Area
 * @brief 	Resultados dos cálculos das 
 *			áreas das figuras espaciais
 * @{
 * @fn 		void calcAreaPiramide(float& base, float& altura)
 * @brief 	Função que imprime o valor da área da pirâmide
 * @param 	base BASE valor da base da pirâmide
 * @param 	altura ALTURA valor da altura da pirâmide
 */
void calcAreaPiramide(float& base, float& altura) {
	cout << "Digite o tamanho da aresta da base da pirâmide: ";
	cin >> base;
	cout <<	"Digite o tamanho da altura da pirâmide: ";
	cin >> altura;
	cout << endl;
	cout << "A área da pirâmide é: "<< areaPiramide(base, altura) << endl;
	cout << endl;
}

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param base BASE valor da base do círculo
 */
void calcAreaCubo(float& aresta) {
	cout << "Digite o tamanho da aresta do cubo: ";
	cin >> aresta;
	cout << endl;
	cout << "A área do cubo é: "<<areaCubo(aresta) << endl;
	cout << endl;
}

/** 
 * @brief Função que imprime o valor da área do paralelepípedo
 * @param aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 */
void calcAreaParalelepipedo(float& aresta1, float& aresta2, float& aresta3) {
	cout << "Digite o tamanho da aresta 1: ";
	cin >> aresta1;
	cout << "Digite o tamanho da aresta 2: ";
	cin >> aresta2;
	cout << "Digite o tamanho da aresta 3: ";
	cin >> aresta3;
	cout << endl;
	cout << "A área do paralelepípedo é: "<< areaParalelepipedo(aresta1, aresta2, aresta3) << endl;
	cout << endl;
}

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param raio RAIO valor da base do círculo
 */
void calcAreaEsfera(float& raio) {
	cout << "Digite o tamanho do raio: ";
	cin >> raio;
	cout << endl;
	cout << "A área da esfera é: "<< areaEsfera(raio) << endl;
	cout << endl;
}
///@}