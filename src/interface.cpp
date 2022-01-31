#include "../include/interface.hpp"
#include "../include/Dados.hpp"

/* Implementação da classe Interface */

Interface::Interface(){};

//Texto iniciando o carregamento de dados.
void Interface::carregar_dados(){
  std::cout<<"Carregando base de dados..."<<std::endl;
}

//Texto finalizando o carregamento de dados, devolve a quantidade de dados lidos.
void Interface::concluir_carregar_dados(int n){
  std::cout<<"Base de dados carregada com sucesso!"<<std::endl;
  std::cout<<"Total de: "<< n <<" dados carregados"<<std::endl;
  
}

//Texto pedindo para o usuário digitar.
void Interface::pedir_string(){
  std::cout<<"Digite uma letra/palavra/frase ou Ctrl+D para sair:"<<std::endl;
}

//Captura oque o usuário digitou.
std::string Interface::pegar_string(){
  std::string pedido;
  getline(std::cin,pedido);
  return pedido;
}

//Texto para saida do programa.
void Interface::sair(){
  std::cout<<std::endl;
  std::cout<<"Saindo do programa! Até a próxima."<<std::endl;
}

//Texto com os possiveis resultados.
void Interface::possiveis_resultados(std::vector<std::pair<long,std::string>> vetor_resultados, int i){

  if(vetor_resultados.size()==0){
    std::cout<<"Não foram encontrados resultados para a busca!"<<std::endl;  
  }else{
    if(vetor_resultados.size()==i){
      
    }else{
      std::cout<<"Numero de resultados para a busca:"<<vetor_resultados.size()<<std::endl;
      for(int i=0;i<vetor_resultados.size();i++){
        std::cout<<vetor_resultados[i].second<<std::endl;
      }
      std::cout<<std::endl;
    }
  }
}