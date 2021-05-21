/* 	O programa a seguir foi solicitado pelo professor para a obtenção da nota da APS.
	
   	Autor: Lucas Gabriel
   	Curso: Ciência da computação
   	Professor: Paulo Caetano
*/


// Título: Programa para o cálculo da sequência de Fettucine.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("-------------------------------------\n");
	printf ("          SEQUÊNCIA FETTUCINE        \n");
	printf ("-------------------------------------\n");
	printf ("Autor: Lucas Gabriel\n");
	printf ("Curso: Ciência da Computação\n \n");
	
	printf ("Olá, tudo bem? Este programa irá mostrar para você a sequência de Fettucine através dos dados informados por você.\n \n");
	printf ("A sequência de Fettucine segue a seguinte regra: Se a posição do número for ímpar, o próximo número será igual a soma dos dois anteriores. \n Se a posição for par, o próximo númera será igual a subtração do primeiro anterior pelo segundo anterior. \n \n");
		
	int anterior1, anterior2, proxnumero, posicao=1, limite;
	
	// Solicita e armazena o primeiro número informado pelo usuário.
	printf ("Digite o primeiro número da sequência Fettucine:");
	scanf ("%d", &anterior1); 
	printf ("\n");

	// Solicita e armazena o segundo número informado pelo usuário.
	printf ("Digite o segundo número da sequência Fettucine: ");
	scanf ("%d", &anterior2); 
	printf ("\n");
	
	// Solicita e armazena o limite para a sequência Fettucine, esse número tem que ser maior que 3.
	printf ("Informe o limite para a sequência Fettucine, dever ser maior que 3: ");
	scanf ("%d", &limite);
	printf ("\n");
	
	// Caso o número informado pelo usuário seja menor que 3, o programa irá informa-ló e solicitará um novo número.
	while (limite < 3) {
		printf ("O número informado é menor que 3. \n \n");
		printf ("Informe o limite para a sequência Fettucine, dever ser maior que 3: ");
		scanf ("%d", &limite);
		printf ("\n");
	}
	
	printf ("A sequência é: \n"); //Imprimi o texto na tela.
	
	// Imprimi na tela o primeiro número informado pelo usuário.
	printf ("%d \t", anterior1);
	
	// Testa se 'posicao' é menor que o limite informado pelo usuário.
	while (posicao < limite) { 
		
		printf ("%d \t", anterior2); // Imprimi na tela a váriavel 'num2'
		 
		
		if (posicao % 2 == 0) { // Testa se a variável 'posicao' é par. Se 'sim' o próximo número será 'num2' - 'num1' e será armazenado na variável 'proxnum'.
			proxnumero = anterior2 - anterior1;
			posicao = posicao + 1; // A cada repetição, enquanto 'posicao' for menor que o limite (repnum), a variável 'posicao' recebe + 1 unidade.
		}
	
		else {  // Caso o número não seja par, ele só pode ser ímpar. Então a variável 'proxnum' recebe 'num1' + 'num2'.
			proxnumero = anterior1 + anterior2;
			posicao = posicao + 1; // A cada repetição, enquanto 'posicao' for menor que o limite (repnum), a variável 'posicao' recebe + 1 unidade.
		}
	
		
		anterior1 = anterior2; // A variável 'num1' receber o valor da 'num2'.
		anterior2 = proxnumero; // A variável 'num2' receber o valor da 'proxnum'.
		

	

	}
	
		printf ("\n");   
		system ("PAUSE");
		return 0;
	
}
