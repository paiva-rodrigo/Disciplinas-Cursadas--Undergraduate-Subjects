programa
{
	
	funcao inicio()
	{ 
		inteiro rjp,rjp1
		
		escreva("digite um número inteiro maior que 2: \n")
		leia(rjp)
		escreva("Os números pares entre esse número são:")
		  para(rjp1=0;rjp>=rjp1;rjp=rjp-2)
		      se(rjp%2==0)
		         escreva("\n",rjp)
		       }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 171; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */