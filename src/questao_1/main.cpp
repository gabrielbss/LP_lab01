/**
* @file 	main.cpp
* @brief 	Programa que cálcula área, perímetro e volume
*			 de figuras geométricas planas e espaciais
* @details	Figuras geométricas planas possuem apenas área e 
*			perímetro. As espaciais não possuem perímetro
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
* @since	09/03/2017
* @date		12/03/2017
*/

#include <iostream>
#include <limits>
#include "calcula.h"
#include "volume.h"
#include "perimetro.h"

using std::cin;
using std::cout;
using std::endl;
using std::streamsize;


/**\defgroup Figuras_Planas_Inicialização
* @brief 	Solicitação dos cálculos
*			das figuras planas
* @{
*/

/**
* @brief  	Inicializa cálculos para o triângulo
*/
void triangulo() {
	float base;
	calcAreaTriangulo(base);
	calcPerimetroTriangulo(base);
}

/**
* @brief    Inicializa cálculos para o retângulo
*/
void retangulo() {
	float base, altura;
	calcAreaRetangulo(base, altura); 
	calcPerimetroRetangulo(base, altura);
}
/**
* @brief 	Inicializa cálculos para o quadrado
*/
void quadrado() {
	float base;
	calcAreaQuadrado(base);
	calcPerimetroQuadrado(base);
}

/**
* @brief 	Inicializa cálculos para o círculo
*/
void circulo() {
	float raio;
	calcAreaCirculo(raio);
	calcPerimetroCirculo(raio);
}
//@}

/**\defgroup Figuras_Espaciais_Inicialização
* @brief 	Solicitação dos cálculos 
*			das figuras espaciais
* @{
* @fn 	 	void piramide()
* @brief 	Inicializa cálculos para a pirâmide
*/
void piramide() {
	float base, altura;
	calcAreaPiramide(base, altura);
	calcVolumePiramide(base, altura);

}

/**
* @brief 	Inicializa cálculos para o cubo
*/
void cubo() {
	float aresta;
	calcAreaCubo(aresta);
	calcVolumeCubo(aresta);
}

/**
* @brief 	Inicializa cálculos para o paralelepípedo
*/
void paralelepipedo() {
	float aresta1, aresta2, aresta3;
	calcAreaParalelepipedo(aresta1, aresta2, aresta3);
	calcVolumeParalelepipedo(aresta1, aresta2, aresta3);
}

/**
* @brief	Inicializa cálculos para a esfera
*/
void esfera() {
	float raio;
	calcAreaEsfera(raio);
	calcVolumeEsfera(raio);
	
}
///@}

void menu() {
	system("clear");
	cout << "-----------------------------------------" << endl;
	cout << "Calculadora de Geometria Plana e Espacial" << endl;
	cout << "(1) Triângulo equilátero" << endl;
	cout << "(2) Retângulo" << endl;
	cout << "(3) Quadrado" << endl;
	cout << "(4) Círculo" << endl;
	cout << "(5) Pirâmide com base quadrangular" << endl;
	cout << "(6) Cubo" << endl;
	cout << "(7) Paralelepípedo" << endl;
	cout << "(8) Esfera" << endl;
	cout << "(0) Sair" << endl;
	cout << endl;
	cout << "Digite a sua opção: ";
}


/**
* @brief	Função usada para limpar o buffer da cin
*/
void limparBuffer() {
	cin.clear(); 
    std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
}

/**
* @brief	Função para ler entrada do usuário com checagens de segurança
* @param	s S ponteiro de char que armazena o valor da escolha do usuário
*/
int lerTeclado(char* s) {
	cin.getline(s, 2);
	if (!std::cin) {
		limparBuffer();
    	return 1;
	}
	return 0;
}

/**
* @brief	Função que chama outra para efetuar o calculo
*			de acordo com a entrada do usuario
* @param	escolha ESCOLHA figura geometrica escolhida pelo usuario
*/
void menuEscolha(int escolha) {
	char s[2];
	switch(escolha) {
		case 1: 
			triangulo();		
		 	break;
		case 2:
			retangulo();
			break;
		case 3:
			quadrado();
			break;
		case 4:
			circulo();
			break;
		case 5:
			piramide();
			break;
		case 6:
			cubo();
			break;
		case 7:
			paralelepipedo();
			break;
		case 8:
			esfera();
			break;
		default:
			break;
	}
	
	cout << endl;
	
	do {
		cout << "--------------------------------------" << endl;
		cout << "Digite C para comecar um novo calculo: "; 
		limparBuffer();
		lerTeclado(s);
	} while (s[0]!='c' && s[0]!='C'); // pede uma entrada correta (c ou C) enquanto for digitada uma errada

}

int main() {
	char escolhaC[2];
	int escolha = 0;
	system("clear");
	do {
		int erro = 1;
		while(erro) {
			menu();
			erro = lerTeclado(escolhaC);
			system("clear");
		}
		escolha = escolhaC[0]-48;
		if (escolha <= 8 && escolha > 0) menuEscolha(escolha);
	} while (escolha);
	cout << "Saindo..." << endl;

	return 0;
}
