#ifndef REQUISICAO_H
#define REQUISICAO_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>

class Requisicao{
  public:

  /**
  * Cria a classe Requisicao.
  */
  Requisicao();

  /**
  * Função que calcula os possíveis resultados.
  * @param pedido string com a palavra da busca.
  * @param dados referência para o vetor com a base de dados.
  * @return vetor com os possíveis resultados.
  */
  std::vector<std::pair<long,std::string>> autocompleta(std::string pedido,std::vector<std::pair<long,std::string>> &dados);

  /**
  * Função que ordena os resultados, do maior peso para o menor.
  * @param dados referência para o vetor com os possíveis resultados.
  * @return vetor de entrada ordenado.
  */
  std::vector<std::pair <long,std::string>> ordenar(std::vector<std::pair<long,std::string>> &dados);
};
#endif