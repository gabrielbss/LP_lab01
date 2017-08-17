/**
 * @file	calcvolume.h
 * @brief	Arquivo cabeçalho contendo a definição das funções que solicitam
 *			ao usuário os dados necessários para o cálculo do volume com a figura
 *			geométrica e chamam as funções que realizam essa operação
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 * @sa 		volume.h
 */

#ifndef CALVOLUME_H
#define CALVOLUME_H

/** 
 * @brief 	Função que imprime o valor do volume da pirâmide
 * @param 	base BASE valor da base da pirâmide
 * @param 	altura ALTURA valor da altura da pirâmide
 */
void calcVolumePiramide(float& base, float& altura);


/** 
 * @brief 	Função que imprime o valor do volume do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 */
void calcVolumeCubo(float& aresta);


/** 
 * @brief 	Função que imprime o valor do volume do paralelepípedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 */
void calcVolumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3);



/** 
 * @brief 	Função que imprime o valor do volume da esfera
 * @param 	raio RAIO valor do raio do cubo
 */
void calcVolumeEsfera(float& raio);


#endif 
