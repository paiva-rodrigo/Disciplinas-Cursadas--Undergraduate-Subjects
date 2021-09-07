programa
{
	
	funcao inicio()
	{ 
		inteiro rjp,RJP
			escreva("Quantas horas foram trabalhadas durante a semana?\n")
			leia(rjp)
			RJP=rjp-40
			 se(rjp<40){
			 	escreva("O salário semanal desse empregado é:\n",rjp*40)
			 }
			 senao{
			 	escreva("o salário semanal desse empregado é:\n",600+21*RJP)
		 }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 305; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */