#include "turma.h"

turma::turma()
{
	codigo = "desconhecido";
        creditos = "desconhecido";
        nome = "desconhecido";
        turma = "desconhecido";
        diaSemana.push_front(0);
        horario.push_front("desconhecido");
}

turma::turma(string _codigo,string _creditos,string _nome,string _turma, int dia, string hor)
{
	codigo = _codigo;
        creditos = _creditos;
        nome = _nome;
        turma = _turma;
        diaSemana.push_front(dia);
        horario.push_front(hor);
}

void set_primeiro_diaSemana(int d)
{
	diaSemana[0] = d;
}

void adcionar_ultimo_diaSemana(int d);
{
	diaSemana.push_back(d);
}

void set_primeiro_horario(string h)
{
	horario[0] = h;
}

void adcionar_ultimo_horario(string h)
{
	horario.push_back(h);
}

void turma::set_codigo(string _codigo)
{
	codigo = _codigo;
}

void turma::set_creditos(string _creditos)
{
	creditos = _creditos;
}

void turma::set_nome(string _nome)
{
	nome = _nome;
}
	
void turma::set_turma(string _turma)
{
	turma = _turma;
}

string turma::get_codigo()
{
	return codigo;
}

string turma::get_creditos()
{
	return creditos;
}

string turma::get_nome()
{
	return nome;
}

string turma::get_turma()
{
	return turma;
}
 
/*int turma::getDia(int _pos)
{
	if(_pos>=0 && _pos<diaSemana.size())
		return diaSemana[_pos];
	else
		return -1;			//(null para o outro)
}
int turma:: getsizedia()
{
	return diaSemana.size();
}
*/



//– vx.empty();
