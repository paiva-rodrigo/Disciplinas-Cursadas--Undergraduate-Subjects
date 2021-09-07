programa
{
	
	funcao inicio()
	{
	   inteiro RJP,rjp
			escreva("Em qual ano você está?\n ")
			leia(RJP)
			escreva("Qual o ano do seu nascimento?\n")
			leia(rjp)
			se(RJP-rjp<=3){
				escreva("Você é um bebê")
				}
			senao se(RJP-rjp<=10){
				escreva("Você é uma criança")
				}
			senao se(RJP-rjp<=18){
				escreva("Você é um adolescente")
				}
			senao se(RJP-rjp<=51){
				escreva("Você é um aduto")
				}
			senao{
				escreva("Você é um idoso")
				}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 108; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */