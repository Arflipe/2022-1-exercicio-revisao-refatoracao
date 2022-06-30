#include "Animal.hpp"

Animal::~Animal(){}

Animal::Animal(string _nome, int _idade, string _familia, int _porcao, string _comida) : nome(_nome), idade(_idade), familia(_familia){
	alimentacao = Alimentacao(_porcao, _comida);
}

Animal::Animal(string _nome, int _idade, string _familia, int _porcao, string _comida, string _especie) : Animal(_nome, _idade, _familia, _porcao, _comida){
	especie = _especie;
}

void Animal::print(){
	cout << endl << "[Animal]" << endl;
	cout << "  Nome: " << nome << endl;
	cout << "  Idade: " << idade << endl;
	cout << "  Familia: " << familia << endl;
	if(!especie.empty()){
		cout << "  Especie: " << especie << endl;
	}
}