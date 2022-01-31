#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>

class Interface{
  public:

  /**
  * Cria a classe Interface.
  */
  Interface();

  /**
  * Texto iniciando o carregamento de dados.
  */
  void carregar_dados();

  /**
  * Texto concluindo o carregamento de dados.
  * @param n inteiro com a quantidade de dados lidos.
  */
  void concluir_carregar_dados(int n);

  /**
  * Texto pedindo ao usuário digitar.
  */
  void pedir_string();

  /**
  * Função que captura oque o usuário digitou.
  * @return string com a palavra digitada.
  */
  std::string pegar_string();

  /**
  * Texto para sair do programa.
  */
  void sair();

  /**
  * Texto com os possiveis resultados da busca.
  * @param vetor_resultados vetor com os possiveis resultados.
  * @param i inteiro com a quantidade de dados.
  */
  void possiveis_resultados(std::vector<std::pair<long,std::string>> vetor_resultados, int i);
};
#endif