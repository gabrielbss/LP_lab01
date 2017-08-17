/**
 * @file	area.cpp
 * @brief	Arquivo cabeçalho contendo a definição das funções 
 * 			que calculam a área das figuras geométricas 
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 * @sa 		area.h
 */

#include <cmath>
#include "area.h"

#define PI 3.1415
#define pitagoras(a,b) (pow(a,2) - pow(b,2))

/**\defgroup Figuras_Planas_CalcArea
 * @brief 	Funções que calculam o valor da área das figuras planas
 * @{
 * @fn 		float trianguloArea(float& base)
 * @brief 	Função que calcula o valor da área do triângulo
 * @param 	base BASE valor da base da triângulo
 * @return 	área do triângulo
 */
float trianguloArea(float& base) {
	return  (base * sqrt(pitagoras(base / 2, base)
	 - (pitagoras(base / 2, base) * 2))) / 2;
} 	

/**
 * @brief 	Função que calcula o valor da área do retângulo
 * @param 	base BASE valor da base do retângulo
 * @param 	altura ALTURA valor da altura do retângulo
 * @return 	área do retângulo
 */
float retanguloArea(float& base, float& altura) {
	return base * altura;
}

/** 
 * @brief 	Função que calcula o valor da área do quadrado
 * @param 	lado LADO valor dos lados do quadrado
 * @return 	área do quadrado
 */
float quadradoArea(float& lado) {
	return pow(lado,2);
}

/**
 * @brief 	Função que calcula o valor da área do círculo
 * @param 	raio RAIO valor do raio do círculo
 * @return 	área do círculo
 */
float circuloArea(float& raio) {
	return PI * pow(raio,2);
}
///@}

/**\defgroup Figuras_Espaciais_CalcArea
 * @brief 	Funções que calculam o valor da área das figuras espaciais
 * @{
 * @fn 		float areaPiramide(float& base, float& altura)
 * @brief 	Função que calcula o valor da área da pirâmide
 * @param 	base BASE valor da base da pirâmide
 * @param	altura ALTURA valor da altura da pirâmide
 * @return 	área da pirâmide
 */
float areaPiramide(float& base, float& altura) {
	return (trianguloArea(base) * 4) + (base * base);
}


/**
 * @brief 	Função que calcula o valor da área do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 * @return 	área do triângulo
 */
float areaCubo(float& aresta){
	return 6 * pow(aresta,2);
}

/**
 * @brief 	Função que calcula o valor da área do paralelepípedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 * @return 	área do paralelepípedo
 */
float areaParalelepipedo(float& aresta1,float& aresta2,float& aresta3){
	return (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3);
}

/**
 * @brief 	Função que calcula o valor da área da esfera
 * @param 	raio RAIO valor do raio da esfera
 * @return 	área da esfera
 */
float areaEsfera(float& raio){
	return 4 * PI * pow(raio,2);
}
///@}