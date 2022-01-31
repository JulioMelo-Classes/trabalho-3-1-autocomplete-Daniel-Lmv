#include "../include/requisicao.hpp"

/* Implementação da classe Requisicao */
Requisicao::Requisicao(){};

//Função pra pegar os possiveis resultados.
std::vector<std::pair <long,std::string>> Requisicao::autocompleta(std::string pedido,std::vector<std::pair<long,std::string>> &dados){
  
  std::vector<std::pair<long,std::string>> resultados;
  
  //Conversão para minúsculo.
  for(int i=0;i<pedido.length();i++){
    pedido[i] = tolower(pedido[i]);
  }

  //Compara se a palavra é encontrada na lista.
  for(int i=0;i<dados.size();i++){
    //Variavel auxiliar para comparação . 
    int aux=0;

    for(int j=0;j<pedido.length();j++){
      if(pedido[j]==dados[i].second[j]){
        aux= aux+0;
      }else{
        aux= aux+1;
      }
    }
    if(aux==0){
      //Adiciona no vetor de resultados.
      resultados.push_back(dados[i]);
    }
  }
  return resultados;
}

//Função pra ordenar o vetor de resultados do peso maior para o menor.
std::vector<std::pair <long,std::string>> Requisicao::ordenar(std::vector<std::pair<long,std::string>> &dados){
  for(int i=0;i<dados.size();i++){
    for(int j=0;j<dados.size()-1;j++){
      if(dados[j].first<dados[j+1].first){
        std::pair <long,std::string> temp;
        temp = dados[j];
        dados[j] = dados[j+1];
        dados[j+1] = temp;
      }
    }
  }
  return dados;
}