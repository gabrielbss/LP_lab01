/**
 * @file	area.h
 * @brief	Arquivo cabeçalho contendo a definicao das funções 
 * 			que calculam a área das figuras geométricas
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 */


#ifndef AREA_H
#define AREA_H


/** 
 * @brief 	Função que calcula o valor da área do triangulo
 * @param 	base BASE valor da base da triangulo
 * @return 	área do triângulo
 */
float trianguloArea(float& base);

/** 
 * @brief 	Função que calcula o valor da área do retângulo
 * @param 	base BASE valor da base do retângulo
 * @param 	altura ALTURA valor da altura do retângulo
 * @return 	área do retângulo
 */
float retanguloArea(float& base, float& altura);

/** 
 * @brief 	Função que calcula o valor da área do quadrado
 * @param 	lado LADO valor dos lados do quadrado
 * @return 	área do quadrado
 */
float quadradoArea(float& lado);

/** 
 * @brief 	Função que calcula o valor da área do círculo
 * @param 	raio RAIO valor do raio do círculo
 * @return 	área do círculo
 */
float circuloArea(float& raio);

/** 
 * @brief 	Função que calcula o valor da área da pirâmide
 * @param 	base BASE valor da base da pirâmide
 * @param	altura ALTURA valor da altura da pirâmide
 * @return 	área da pirâmide
 */
float areaPiramide(float& base,float& altura);

/** 
 * @brief 	Função que calcula o valor da área do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 * @return 	área do triângulo
 */
float areaCubo(float& aresta);

/** 
 * @brief 	Função que calcula o valor da área do paralelepípedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 * @return 	área do paralelepípedo
 */
float areaParalelepipedo(float& aresta1,float& aresta2,float& aresta3);

/** 
 * @brief 	Função que calcula o valor da área da esfera
 * @param 	raio RAIO valor do raio da esfera
 * @return 	área da esfera
 */
float areaEsfera(float& raio);

#endif