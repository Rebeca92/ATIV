#ifndef __TURMA_H__
#define __TURMA_H__
#include "pessoa.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class turma{
	
	public:
	pessoa *paux, *prim;
	turma();
	void criar_turma();
	void exibir();
	/*void adcionar_inicio();
	void adcionar_final();
	void adcionar_meio();*/
};
#endif
