#ifndef __PESSOA_H__
#define __PESSOA_H__
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class pessoa{
	private:
	string nome, sexo;
	int idade;
	pessoa *prox;
	
	public:
	pessoa();
	pessoa(string _nome,string _sexo,int _idade);
	void set_nome(string _nome);
	void set_sexo(string _sexo);
	void set_idade(int _idade);
	void set_prox(pessoa *p);
	
	string get_nome();
	string get_sexo();
	int get_idade();
	pessoa* get_prox();

	void exibir();
};
#endif
	
