#include <iostream>

using namespace std;

 	float soma(float a, float b){
 		return a + b;
	 }
	 
	float subtracao(float a, float b){
		return a - b;
	}
	
	float multiplicacao(float a, float b){
 		return a * b;
	}
	 
	float divisao(float a, float b){
		return a / b;
	}
	
	 
main(){
	
	float numero, numero2;
	int op;
	
	do {
		cout << "Informe o primeiro numero:";
		cin >> numero;
		
		cout << "informe o segundo numero:";
		cin >> numero2;
		
		cout << "1- para somar" << endl; 
		cout << "2- para subtrair" << endl; 
		cout << "3- para multiplicar" << endl; 
		cout << "4- para dividir" << endl;
		cout << "5- sair" << endl;
		cin >> op;
		 
		switch(op){
			case 1: cout << "R:" << soma(numero, numero2) << endl;
			break;
			case 2: cout << "R:" << subtracao(numero, numero2) << endl;
			break;
			case 3: cout << "R:" << multiplicacao(numero, numero2) << endl;
			break;
			case 4: cout << "R:" << divisao(numero, numero2) << endl;
			break;
			case 5: cout << "sair" << endl;
			break;
			default: cout << "Valor invalido"<< endl;
			
		}
	}while(op != 5);
	
}
