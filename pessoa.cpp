#include "pessoa.h"

pessoa::pessoa()
{
	nome = "desconhecido";
	sexo = "desconhecido";
	idade = 0;
	prox = NULL;
}

pessoa::pessoa(string _nome,string _sexo,int _idade)
{
	nome = _nome;
	sexo = _sexo;
	idade = _idade;
	prox = NULL;
}

void pessoa::set_nome(string _nome)
{
	nome = _nome;
}

void pessoa::set_sexo(string _sexo)
{
	sexo = _sexo;
}

void pessoa::set_idade(int _idade)
{
	idade = _idade;
}

void pessoa::set_prox(pessoa *p)
{
	prox = p;
}

string pessoa::get_nome()
{
	return nome;
}

string pessoa::get_sexo()
{
	return sexo;
}

int pessoa::get_idade()
{
	return idade;
}

pessoa* pessoa::get_prox()
{
	return prox;
}

void pessoa::exibir()
{
	cout << get_nome() << sexo << idade << endl;
}
