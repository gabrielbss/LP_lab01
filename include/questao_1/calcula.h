/**
 * @file	calcarea.h
 * @brief	Arquivo cabeçalho contendo a definição das funções que solicitam
 *			ao usuário os dados necessários para o cálculo da área com a figura
 *			geométrica e chamam as funções que realizam essa operação
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 * @sa 		area.h
 */

#ifndef CALCAREA_H
#define CALCAREA_H

#include "area.h"

/** 
 * @brief Função que imprime o valor da área do triângulo
 * @param base BASE valor da base do triângulo
 */
void calcAreaTriangulo(float& base);

/** 
 * @brief Função que imprime o valor da área do retângulo
 * @param base BASE valor da base do retângulo
 * @param altura ALTURA valor da altura do retângulo
 */
void calcAreaRetangulo(float& base, float& altura);

/** 
 * @brief Função que imprime o valor da área do quadrado
 * @param base BASE valor da base do quadrado
 */
void calcAreaQuadrado(float& base);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param base BASE valor da base do círculo
 */
void calcAreaCirculo(float& raio);

/** 
 * @brief Função que imprime o valor da área da pirâmide
 * @param base BASE valor da base da pirâmide
 * @param altura ALTURA valor da altura da pirâmide
 */
void calcAreaPiramide(float& base, float& altura);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param base BASE valor da base do círculo
 */
void calcAreaCubo(float& aresta);

/** 
 * @brief Função que imprime o valor da área do paralelepípedo
 * @param aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 */
void calcAreaParalelepipedo(float& aresta1, float& aresta2, float& aresta3);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param raio RAIO valor da base do círculo
 */
void calcAreaEsfera(float& raio);

#endif