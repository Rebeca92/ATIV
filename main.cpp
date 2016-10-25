#include "pessoa.h"
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	pessoa *prim, *paux;
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

	paux = prim;
	while(paux!=NULL)
	{
		cout << paux->get_nome() << paux->get_idade() << endl;
		paux = paux->get_prox();
	}

	return 0;
}
