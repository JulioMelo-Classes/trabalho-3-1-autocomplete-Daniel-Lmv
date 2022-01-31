#include "../include/Dados.hpp"

/* Implementação da classe Dados */

Data::Data(){};

//Função que carrega a base de dados.
std::vector<std::pair<long,std::string>> Data::carregar_data(std::string arquivo){
  //Definição para abrir no modo leitura, capturar linha e a separação do peso.
  std::ifstream arq1;
  std::string line;
  std::string::size_type sz;

  int f_or_t=0;

  arq1.open(arquivo,std::ios::in);
  while(! arq1.eof()){
    if(f_or_t==0){
      getline(arq1,line);
      long lixo = std::stol(line,&sz);
      f_or_t=1;
      //Pega o primeiro número e adiciona numa variável lixo para não atrapalhar na captura das palavras e pesos.
    }
    getline(arq1,line);
    //sz = dá o local onde acaba o peso.
    //sz + 1 = lugar onde começa a string.
    long peso = std::stol(line,&sz);

    std::pair<long,std::string> palavras;
    palavras.first = peso;
    palavras.second = line.substr(sz+1);

    //Conversão para minúsculo.
    for(int i=0;i<palavras.second.length();i++){
      palavras.second[i]=tolower(palavras.second[i]);
    }

    //Adicionando elementos no vetor.
    date.push_back(palavras);
  }
  arq1.close();

  return date;
}

//Função que pega a quantidade de dados lidos.
int Data::getndados(){
  n_dados = date.size();
  return n_dados;
}