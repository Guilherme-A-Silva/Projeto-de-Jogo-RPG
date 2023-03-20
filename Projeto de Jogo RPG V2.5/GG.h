/*
										PROJETO LIP I
										
	Disciplina: Laboratório de Introdução a Programação
	Ano/Semestre: 2022.1				
											Grupo 3 
											
	Alunos: Guilherme A. Silva       			|  Edenilson do N. Silva 
	        Joao Luis Moreno de Lima 			|  Antonio Rodrigues da Silva Junior
	        Gabriel Filipe da Silva Fernandes   |  Paulo Sergio Maia Mendes de Oliveira
	        
	Professora: Ceres Germanna Braga Morais
	Data: 25/08/2022
	Última modificação: 06/09/2022.
	
*/

#ifndef _GG_H
#define _GG_H


/*
	Bibliotecas utilizadas INICIO	
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <ctime>
#include <conio.h>
#include <cstdio>
#include <clocale>
#include <cstdlib>
#include <windows.h>

using namespace std;

/*
	Bibliotecas utilizadas FIM
*/

// # ESTRUTURA DE DADOS PARA IA

struct IA{
	string nome;
	int idade;
	float altura;
	float attack;
	float defense;
	float life;
	float agilidade;
	float resistencia_magia;
	int magia;
	float peso;
	int inteligencia;
};

// # ESTRUTURA DE DADOS PARA PERSONAGENS

struct personagem{
	string nome;
	int idade;
	float altura;
	float attack;
	float defense;
	float life;
	float agilidade;
	float resistencia_magia;
	int magia;
	float peso;
	int inteligencia;
};

/*
	PROTOTIPAÇÃO DE FUNÇÕES ÍNICIO
*/

int main();
void menu();
void Vitoria(int i);
void status();
void StatusUm();
void switchcase(int op);
void UmJogador();
void DoisJogadores();
int defense(int i);
int attack();
void combate1();
void combate2();
void CombateDois();
void CombateUm();
int Cartas();
int menuv2();
void arrow (int position, int arrowPosition);
void ManualDeInstrucao();
void Creditos();
void Classes(int x);

/*
	PROTOTIPAÇÃO DE FUNÇÕES FIM
*/

#endif