/**
 * @file	primalidade.cpp
 * @brief	Arquivo corpo contendo a implementação da função 
 * 			que calcula o maior número primo anterior a um determinado
 *			inteiro de forma recursiva
 * @author	Gabriel Barbosa
 * @since	17/08/2017
 * @date	17/08/2017
 */


#include "primalidade.h"

/**
* @brief    Função que calcula o maior numero primo anterior ao numero passado
* @details	Faz a checagem apenas da raiz quadrada no fatorial para baixo, assim poupando mais tempo.
* @param	n N fatorial do numero informado pelo usuario.
* @param 	k K raiz quadrada de N
* @return 	retorna -1 caso não exista um numero primo anterior, caso exista, ele é retornado.
*/
int maior_primo(int n, int k) {

	if (n % 2 == 0) return maior_primo(n-1, (int)sqrt(n-1));
	if (n % k == 0) return maior_primo(n-1, (int)sqrt(n-1));
	else if (k > 2) return maior_primo(n, k-1);
	return n;
}