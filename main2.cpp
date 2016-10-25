#include "turma.h"
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	turma *t;
	
	t = new turma();
	
	t->criar_turma();
	t->exibir();
	
	return 0;
}
