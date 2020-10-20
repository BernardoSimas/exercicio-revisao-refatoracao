#include <iostream>
#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {
		double horaExtra = 0;
		double horasMes;
  		//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
        	if (horasTrabalhadas > 8) {
        		horaExtra = horasTrabalhadas - 8;
      		}
		horasMes = horasTrabalhadas + horaExtra/2;
	  	return horasMes * salarioHora;
}
