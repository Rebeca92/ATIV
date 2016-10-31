#ifndef __TURMA_H__
#define __TURMA_H__
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class turma
{
	private:
        string codigo;
        string creditos;
        string nome;
        string turma;
        vector<int> diaSemana;
        vector<string> horario;
	
	public:
	turma();
	turma(string _codigo,string _creditos,string _nome,string _turma, int dia, string hor);

	void set_primeiro_diaSemana(int d);
	void adcionar_ultimo_diaSemana(int d);
	void set_primeiro_horario(string h);
	void adcionar_ultimo_horario(string h);

	void set_codigo(string _codigo);
	void set_creditos(string _creditos);
	void set_nome(string _nome)
	void set_turma(string _turma); 

	string get_codigo();
	string get_creditos();
	string get_nome();
	string get_turma(); 

	/*int get_dia(int _pos);
	int getsizedia();	
	string get_hora(int _pos);
	int getsizehora();*/
};
#endif
