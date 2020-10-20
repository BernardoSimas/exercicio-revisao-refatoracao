#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
  	double salarioHora;  
	std::string nomeFuncionario;

  	double pagamentoMes(double horasTrabalhadas) {
		double horaExtra = 0;
		double horasMes;
  		//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
        	if (horasTrabalhadas > 8) {
        		horaExtra = horasTrabalhadas - 8;
      		}
		horasMes = horasTrabalhadas + horaExtra/2;
	  	return horasMes * salarioHora;
    	}
};

#endif
