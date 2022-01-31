#ifndef DADOS_H
#define DADOS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>

class Data{  
  private:
    
    std::vector< std::pair<long,std::string> >date;//<! vetor com a base de dados.
    
    std::string arquivo;//<! nome do arquivo que será lido.

    long n_dados; //<! quantidade de dados lidos.
 
  public:

  /**
  * Cria a classe Data.
  */
  Data();
  
  /**
  * Função que carrega a base de dados.
  * @param arquivo nome do arquivo que será lido.
  * @return vetor com pares de peso e palavras.
  */
  std::vector<std::pair<long,std::string>> carregar_data(std::string arquivo);

  /**
  * Função que pega o número de dados lidos.
  * @return inteiro com a quantidade de dados lidos.
  */
  int getndados();
};
#endif