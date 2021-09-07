programa
{
	
	funcao inicio()
	{
		inteiro rjp,i=1,M=1,D=1
		 
		 escreva("Digite um número inteiro positivo:\n")
		 leia(rjp)
		 se(rjp<0 ){
		   escreva("\n O número digitado não é positivo!!!!")
		 }
		 senao se(rjp==1 ou rjp==0){
		 	escreva("o fatorial desse número é:",1)
		      }
		 senao{
		  	enquanto(rjp>1){
		  		D=rjp*D
                    rjp--
		  	}
		  }
		 
	     escreva("\n O valor  do fatorial desse número é: ",D) 
	  }
}	
	

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 383; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */