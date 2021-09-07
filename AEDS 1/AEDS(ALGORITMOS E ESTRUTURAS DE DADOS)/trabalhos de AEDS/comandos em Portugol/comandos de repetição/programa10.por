programa
{
	
	funcao inicio()
	{
		inteiro rjp
          real RJP=1.0,rjp1=1.0

          escreva("Qual o valor de um número?\n")
          leia(rjp)
		 para(inteiro RJ=1;RJ<=rjp;RJ++){
		 rjp1=rjp1*RJ
		 RJP=RJP+1/rjp1
		}
		escreva("O valor da expressão E(1/0!+1/1!+...1/n!) do número digiyado sendo igual a n é:\n",RJP)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 67; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */