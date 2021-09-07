programa
{
	
	funcao inicio()
	{
		real RJP1, RJP2
			escreva("qual o valor do salário desse funcionário?\n")
			leia(RJP1)
			escreva("Há quantos meses ele trabalha nessa empresa? \n")
			leia(RJP2)
			se(RJP2>12){
				escreva("receberá um aumento de:\n", 0.2*RJP1)
			}
			senao{
				escreva("recebera um aumento de:",0.1*RJP1)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 329; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */