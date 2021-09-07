programa
{
	
	funcao inicio()
	{
		inteiro rjp1,rjp=0

		para(inteiro rjp2=0;rjp2<10;rjp2++){
		 escreva("digite um número:")
		 leia(rjp1)
		  se(rjp1>=10 e rjp1<=20)
		    rjp++
		}
		escreva("\n o numero de números entre 10 e 20 é:\n",rjp)
		escreva("\n o número de números que não fazem parte desse intervalo é:\n",10-rjp)
		
		}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 332; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */