#include "turma.h"
#include "cpessoa2.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <list>

using namespace std;

bool em_ordem(cpessoa &p1, cpessoa &p2)
{
	if(p1.getnome() < p2.getnome())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool em_ordem2(cpessoa *&p1, cpessoa *&p2)
{
	if(p1->getnome()<p2->getnome())
		return true;
	else return false;
}

bool operator ==(cpessoa &p1, cpessoa &p2)
{
	return p1.getnome() == p2.getnome();
}
bool operator <(cpessoa &p1, cpessoa &p2)
{
	return p1.getnome() < p2.getnome();
}

int main()
{
	cpessoa *aux, teste("aaa", 13);
	list<cpessoa>lista;
	list<cpessoa>::iterator p;

	//cria lista de ponteiros
	list<cpessoa*> listaptr;
	list<cpessoa*>::iterator pptr;

	//verifica se a lista está vazia
	if(lista.empty())
		cout << "lista vazia!" << endl;
	else cout << "Lista não vazia" << endl;

	//aponta para o inicio da lista
	p = lista.begin();
	
	cout << "adcionando..." <<endl;
	//adciona uma pessoa na lista
	aux = new cpessoa("Jose",12);
	lista.push_back(*aux);
	//adciona na lista de ponteiros...
	listaptr.push_back(aux);
	pptr = listaptr.begin();
	(*pttr)->imprime();

	lista.push_back(cpessoa("Maria", 17));
	lista.push_back(cpessoa("abel", 22));
	lista.push_front(cpessoa("laura", 22));
	lista.push_front(cpessoa("emilio", 22));

	aux = new cpessoa("zeila", 52);
	lista.push_front(*aux);

	if(lista.empty())
		cout << "lista vazia!" << endl;
	else cout << "lista não vazia!" << endl;
