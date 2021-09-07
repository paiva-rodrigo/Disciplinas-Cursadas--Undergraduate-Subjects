programa
{
	
	funcao inicio()
	{
		inteiro rjp,rjp3=1,rjp4=0,RJ=1

	  escreva("Digite um número:")
	  leia(rjp)
	  escreva("Os valores da sequência de fibonnaci até o ",rjp,"° termo da sequência é:\n0\n")
	   para(inteiro rjp2=0;rjp2<rjp;rjp2++){
	   RJ=rjp3+rjp4
	    escreva(RJ,"\n")
	     rjp3=rjp4
	     rjp4=RJ
	  }
	 
	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 199; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */