	 // sem_1_exemp_1.cpp
	// Programa de impressão de texto.
  	#include <iostream> // permite que o programa gere saída de dados na tela
  	int suma(int a, int b);
  
 	// a funcao main inicia a execução do programa
  int main()
 	{
 		
 	std::cout << "Welcome to C++!\n"; // exibe a mensagem
 	int suma_result = suma(1 , 7);
 	std::cout << suma_result; // exibe a mensagem
    
 
  return 0; // indica que o programa terminou com sucesso
 
 	 } // fim da funcao main
 	 
	 int suma(int a , int b){
	 	return a + b ;
	 }
