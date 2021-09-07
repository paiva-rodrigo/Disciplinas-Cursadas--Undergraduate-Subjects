programa
{
	
	funcao inicio()
	{
		inteiro rj=0
          real rjp,RJ,Mrjp=0.0,mrjp=0.0

		 escreva("Escreva o valor de um número:\n")
		 leia(rjp)
		 RJ=rjp
		enquanto(rjp!=0){
		 se(rjp>0){
		 	Mrjp++
		 }
		 senao {
		 	mrjp++
		 }
         
         	escreva("Escreva o valor de um número:\n")
		leia(rjp)
		RJ=rjp+RJ
		rj++
         }
          escreva("\nA quantidade de números positivos é:\n",Mrjp)
          escreva("\nA quantidade de números negativos é:\n",mrjp)
		escreva("\nO porcentual de números positivos:\n",Mrjp/rj*100)
		escreva("\nO porcentual de números negativos:\n",mrjp/rj*100)
		escreva("\nO valor da média aritimética é:\n",RJ/rj)	
		
	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 265; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */