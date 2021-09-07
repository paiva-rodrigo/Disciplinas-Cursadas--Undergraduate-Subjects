programa
{
	
	funcao inicio()
	{
		inteiro rjp1,Mrjp,mrjp,RJP=0
		escreva("digiteo valor do",RJP+1,"° número:\n")
		leia(rjp1)
		Mrjp=rjp1
		mrjp=rjp1
		para( RJP;RJP<5;RJP++){
			escreva("digite o valor do ",RJP+1,"°número:\n")
			leia(rjp1)
			se(rjp1 > Mrjp){
				Mrjp=rjp1
			}
			senao se(rjp1<mrjp){	
			     mrjp=rjp1
			}
		     }
		escreva("\nO valor do maior número é:\n",Mrjp)
	     escreva("\nO valor do menor número é:\n",mrjp)	
	}
}
	
	
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 109; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */