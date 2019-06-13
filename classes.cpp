//Ver 'NOTE's para correções

#include <iostream>
#include <string>

//classes base (lvl 0)

class Animal {
protected:
	//vars
	int id;
	string classe;
	char sexo;
	double tamanho;
	string dieta;
	Veterinario veterinario;
	Tratador tratador;
	string nome_batismo;
	//NOTE tabela: falta nome da espécie (leão) e nome científico (panthera leo) (???)
	//func
};

class Funcionario {
protected:
	//vars
	int id;
	string nome;
	string cpf;
	short idade;
	short tipo_sanguineo;
	char fator_rh;
	string especialidade;
	//NOTE tabela: falta função (vet/tra)(???)
	//func
};

//classes derivadas (lvl 1)

class Veterinario : public Funcionario {
private:
	//vars
	string crmv;

};

class Tratador : public Funcionario {
private:
	//vars
	int nivel_de_seguranca;

};

class Anfibio : public Animal {
protected:
	//vars
	int total_de_mudas;
	date ultima_muda;

	
};

class Mamifero : public Animal {
protected:
	//vars
	string cor_pelo;

	
};

class Repitil : public Animal {
protected:
	//vars
	bool venenoso;
	string tipo_veneno;
	
};

class Ave : public Animal {
protected:
	//vars
	double tamanho_do_bico_cm;
	double envergadura_das_asas;
	
};

//classes derivadas (lvl 2) (apenas com metodos (???))

class AnfibioNativo : public Anfibio, public AnimalNativo {};
class AnfibioExotico : public Anfibio, public AnimalExotico {};
class MamiferoNativo : public Mamifero, public AnimalNativo {};
class MamiferoExotico : public Mamifero, public AnimalExotico {};
class RepitilNativo : public Repitil, public AnimalNativo {};
class RepitilExotico : public Repitil, public AnimalExotico {};
class AveNativo : public Ave, public AnimalNativo {};
class AveExotico : public Ave, public AnimalExotico {};

//classes derivadas (lvl 1) (???)

class AnimalNativo : public AnimalSilvestre {
protected:
	//vars
	string uf_origem;
	string autorizacao;
};
class AnimalExotico : public AnimalSilvestre {
protected:
	//vars
	string pais_origem;
	//NOTE esquema: falta algo (???)
};

//classes derivadas (lvl 0) (???)

class AnimalSilvestre {
protected:
	//vars
	string autorizacao_ibama;
};