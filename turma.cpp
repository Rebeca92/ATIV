#include "turma.h"

turma::turma()
{
	paux = NULL;
	prim = NULL;
}

void turma::criar_turma()
{
	pessoa *paux;
	string nome, sexo, resp = "sim";	
	int idade;
	prim = NULL;

	while(resp == "sim")
	{
		cout << "escreva o nome da pessoa" << endl;
		cin >> nome;
		cout << "escreva o sexo da pessoa" << endl;
		cin >> sexo;
		cout << "escreva a idade da pessoa" << endl;
		cin >> idade;

		if(prim==NULL)
		{
			paux = prim = new pessoa(nome,sexo,idade);
		}
		else
		{
			paux = prim;
			while(paux->get_prox() != NULL)
				paux=paux->get_prox();
		
			paux->set_prox(new pessoa(nome,sexo,idade));
			paux = paux->get_prox();
		}
		
		cout << "escreva sim caso queira continuar" << endl;
		cin >> resp;
	}
}

void turma::exibir()
{
	pessoa *aux;
	aux = prim;
	while(paux!=NULL)
	{
		cout << aux->get_nome() << aux->get_idade() << endl;
		aux = aux->get_prox();
	}
}


/*
	void adcionar_inicio();
	void adcionar_final();
	void adcionar_meio();
*/


