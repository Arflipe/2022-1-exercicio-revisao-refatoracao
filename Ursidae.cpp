#include "Ursidae.hpp"

Ursidae::Ursidae(string _nome, int _idade) : Animal(_nome, _idade, F_URSIDAE, PORCAO_URSIDAE, COMIDA_URSIDAE){}

Ursidae::Ursidae(string _nome, int _idade, string _especie) : Animal(_nome, _idade, F_URSIDAE, PORCAO_URSIDAE, COMIDA_URSIDAE, _especie){}