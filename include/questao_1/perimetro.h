/**
 * @file	calcperimetro.h
 * @brief	Arquivo cabecalho contendo a definicao das funções que solicitam
 *			ao usuário os dados necessários ao cálculo do perimetro da figura
 *			geométrica e chamam as funções que realizam essa operação
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	12/03/2017
 * @date	21/03/2017
 * @sa 		perimetro.h
 */


#ifndef CALCPERIMETRO_H
#define CALCPERIMETRO_H


/** 
 * @brief	Funcao que imprime o valor do perimetro do triangulo
 * @param	base BASE valor da base do triangulo
 */
void calcPerimetroTriangulo(float& base);


/** 
 * @brief	Funcao que imprime o valor do perimetro do retangulo
 * @param	base BASE valor da base do retangulo
 * @param	altura ALTURA valor da altura do retangulo
 */
void calcPerimetroRetangulo(float& base, float& altura);


/** 
 * @brief	Funcao que imprime o valor do perimetro do quadrado
 * @param	base BASE valor da base do quadrado
 */
void calcPerimetroQuadrado(float& base);


/** 
 * @brief	Funcao que imprime o valor do perimetro do circulo
 * @param	base BASE valor da base do circulo
 */
void calcPerimetroCirculo(float& raio);

#endif