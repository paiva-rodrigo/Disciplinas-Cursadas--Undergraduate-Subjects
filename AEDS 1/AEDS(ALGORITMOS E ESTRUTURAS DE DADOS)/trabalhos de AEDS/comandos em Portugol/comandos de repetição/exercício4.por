programa
{
	funcao inicio()
	{
		inteiro rjp,rjp1
		
		escreva("digite o valor de um número:\n")
		leia(rjp)
          escreva("digite o valor de um número maior que o anterior:\n")
		leia(rjp1)
		
		 se(rjp>=rjp1){
	       escreva("O valor do primeiro número é maior que o segundo!!!O programa não é executável")
			}
		 senao{ 
		  escreva("Os números entre esses dois números são:")
		  para(rjp=rjp++;rjp<rjp1;rjp++)
		   escreva("\n",rjp)
		     }
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 394; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */