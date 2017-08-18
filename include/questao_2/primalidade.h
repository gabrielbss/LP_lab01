/**
 * @file	primalidade.h
 * @brief	Arquivo cabeçalho contendo a definicao da função 
 * 			que calcula o maior número primo anterior a um determinado
 *			inteiro de forma recursiva
 * @author	Gabriel Barbosa
 * @since	17/08/2017
 * @date	17/08/2017
 */


#ifndef PRIMALIDADE_H
#define PRIMALIDADE_H

#include <math.h>


/**
* @brief    Função que calcula o maior numero primo anterior ao numero passado
* @details	Faz a checagem apenas da raiz quadrada no fatorial para baixo, assim poupando mais tempo.
* @param	n N fatorial do numero informado pelo usuario.
* @param 	k K raiz quadrada de N
* @return 	retorna -1 caso não exista um numero primo anterior, caso exista, ele é retornado.
*/
int maior_primo(int n, int k);

#endif