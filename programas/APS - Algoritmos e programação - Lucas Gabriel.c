/* 	O programa a seguir foi solicitado pelo professor para a obten��o da nota da APS.
	
   	Autor: Lucas Gabriel
   	Curso: Ci�ncia da computa��o
   	Professor: Paulo Caetano
*/


// T�tulo: Programa para o c�lculo da sequ�ncia de Fettucine.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("-------------------------------------\n");
	printf ("          SEQU�NCIA FETTUCINE        \n");
	printf ("-------------------------------------\n");
	printf ("Autor: Lucas Gabriel\n");
	printf ("Curso: Ci�ncia da Computa��o\n \n");
	
	printf ("Ol�, tudo bem? Este programa ir� mostrar para voc� a sequ�ncia de Fettucine atrav�s dos dados informados por voc�.\n \n");
	printf ("A sequ�ncia de Fettucine segue a seguinte regra: Se a posi��o do n�mero for �mpar, o pr�ximo n�mero ser� igual a soma dos dois anteriores. \n Se a posi��o for par, o pr�ximo n�mera ser� igual a subtra��o do primeiro anterior pelo segundo anterior. \n \n");
		
	int anterior1, anterior2, proxnumero, posicao=1, limite;
	
	// Solicita e armazena o primeiro n�mero informado pelo usu�rio.
	printf ("Digite o primeiro n�mero da sequ�ncia Fettucine:");
	scanf ("%d", &anterior1); 
	printf ("\n");

	// Solicita e armazena o segundo n�mero informado pelo usu�rio.
	printf ("Digite o segundo n�mero da sequ�ncia Fettucine: ");
	scanf ("%d", &anterior2); 
	printf ("\n");
	
	// Solicita e armazena o limite para a sequ�ncia Fettucine, esse n�mero tem que ser maior que 3.
	printf ("Informe o limite para a sequ�ncia Fettucine, dever ser maior que 3: ");
	scanf ("%d", &limite);
	printf ("\n");
	
	// Caso o n�mero informado pelo usu�rio seja menor que 3, o programa ir� informa-l� e solicitar� um novo n�mero.
	while (limite < 3) {
		printf ("O n�mero informado � menor que 3. \n \n");
		printf ("Informe o limite para a sequ�ncia Fettucine, dever ser maior que 3: ");
		scanf ("%d", &limite);
		printf ("\n");
	}
	
	printf ("A sequ�ncia �: \n"); //Imprimi o texto na tela.
	
	// Imprimi na tela o primeiro n�mero informado pelo usu�rio.
	printf ("%d \t", anterior1);
	
	// Testa se 'posicao' � menor que o limite informado pelo usu�rio.
	while (posicao < limite) { 
		
		printf ("%d \t", anterior2); // Imprimi na tela a v�riavel 'num2'
		 
		
		if (posicao % 2 == 0) { // Testa se a vari�vel 'posicao' � par. Se 'sim' o pr�ximo n�mero ser� 'num2' - 'num1' e ser� armazenado na vari�vel 'proxnum'.
			proxnumero = anterior2 - anterior1;
			posicao = posicao + 1; // A cada repeti��o, enquanto 'posicao' for menor que o limite (repnum), a vari�vel 'posicao' recebe + 1 unidade.
		}
	
		else {  // Caso o n�mero n�o seja par, ele s� pode ser �mpar. Ent�o a vari�vel 'proxnum' recebe 'num1' + 'num2'.
			proxnumero = anterior1 + anterior2;
			posicao = posicao + 1; // A cada repeti��o, enquanto 'posicao' for menor que o limite (repnum), a vari�vel 'posicao' recebe + 1 unidade.
		}
	
		
		anterior1 = anterior2; // A vari�vel 'num1' receber o valor da 'num2'.
		anterior2 = proxnumero; // A vari�vel 'num2' receber o valor da 'proxnum'.
		

	

	}
	
		printf ("\n");   
		system ("PAUSE");
		return 0;
	
}
