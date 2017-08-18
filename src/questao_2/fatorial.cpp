/**
 * @file	fatorial.cpp
 * @brief	Arquivo corpo contendo a implementação da fuñção 
 *			que calcula o fatorial recursivamente de um número
 * @author	Gabriel Barbosa
 * @since	17/08/2017
 * @date	17/08/2017
 */


#include "fatorial.h"

/**
* @brief    Função que calcula o fatorial
* @param	n N inteiro a ser calculado
* @return 	Se o número for igual a 0, é retornado -1 para indivar erro,
*			se o numero for igual a 1 é retornado 1 como resultado.
*			Se N for maior que 1, ao final é retornado o fatorial dele.
*/
int fatorial(int n)
{
	if(n == 0) return -1;
	if (n == 1) return 1;

	return n * fatorial(n-1);
}