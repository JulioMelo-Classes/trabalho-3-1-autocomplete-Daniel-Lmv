#include <iostream>
#include "../include/Dados.hpp"
#include "../include/interface.hpp"
#include "../include/requisicao.hpp"

int main(int argc, char *argv[]) {
  //construtores de classes.
  Data base;
  Interface inter;
  Requisicao req;
  
  //definicao de variaveis.
  std::string order;
  std::vector<std::pair<long,std::string>> dados;
  std::vector<std::pair<long,std::string>> results;
  
  /////////////////////
  //começo do codigo
  ////////////////////
  
  //Texto iniciando o carregamento de dados.
  inter.carregar_dados();
  
  dados = base.carregar_data(argv[1]);
  
  //Pega a auantidade de dados que o programa leu.
  int i = base.getndados();
  
  //Texto concluindo o carregamento de dados.
  inter.concluir_carregar_dados(i);

  do{
  //Texto pedindo palavra.
  inter.pedir_string();
  
  //Pega a palavra/texto que quer comparar.
  order = inter.pegar_string();
  
  //Faz a comparação e armazena em um vetor de resultados.
  results = req.autocompleta(order,dados);
  
  //Ordena o vetor com resultados.
  results = req.ordenar(results);
  
  //Texto com os resultados.
  inter.possiveis_resultados(results,i);

  } while(std::cin);
  
  //Texto do comando de saida.
  inter.sair();  
  return 0;
}