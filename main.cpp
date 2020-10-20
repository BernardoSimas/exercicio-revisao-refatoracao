#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro engenheiro1;
  engenheiro1.nomeFuncionario = "Joao Snow";
  engenheiro1.salarioHora = 35;
  engenheiro1.quantidadeProjetos = 3;
  std::cout << "Nome: " << engenheiro1.nomeFuncionario << std::endl;
  std::cout << "Salario Mes: " << engenheiro1.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << engenheiro1.quantidadeProjetos << std::endl;
  std::cout << std::endl;
  
  Engenheiro engenheiro2;
  engenheiro2.nomeFuncionario = "Daniela Targaryen";
  engenheiro2.salarioHora = 30;
  engenheiro2.quantidadeProjetos = 1; 
  std::cout << "Nome: " << engenheiro2.nomeFuncionario << std::endl;
  std::cout << "Salario Mes: " << engenheiro2.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << engenheiro2.quantidadeProjetos << std::endl;  
  std::cout << std::endl;
  
  Engenheiro engenheiro3;
  engenheiro3.nomeFuncionario = "Bruno Stark";
  engenheiro3.salarioHora = 30;
  engenheiro3.quantidadeProjetos = 2; 
  std::cout << "Nome: " << engenheiro3.nomeFuncionario << std::endl;
  std::cout << "Salario Mes: " << engenheiro3.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << engenheiro3.quantidadeProjetos << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor vendedor1;
  vendedor1.nomeFuncionario = "Tonho Lannister";
  vendedor1.salarioHora = 20;
  vendedor1.quotaMensalVendas = 5000;
  
  std::cout << "Nome: " << vendedor1.nomeFuncionario << std::endl;
  std::cout << "Salario Mes: " << vendedor1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vendedor1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vendedor2;
  vendedor2.nomeFuncionario = "Jose Mormont";
  vendedor2.salarioHora = 25;
  vendedor2.quotaMensalVendas = 3000;
  
  std::cout << "Nome: " << vendedor2.nomeFuncionario << std::endl;
  std::cout << "Salario Mes: " << vendedor2.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vendedor2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor vendedor3;
  vendedor3.nomeFuncionario = "Sonia Stark";
  vendedor3.salarioHora = 30;
  vendedor3.quotaMensalVendas = 4000;
  
  std::cout << "Nome: " << vendedor3.nomeFuncionario << std::endl;
  std::cout << "Salario Mes: " << vendedor3.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vendedor3.quotaTotalAnual() << std::endl;  
  
  return 0;	
}
