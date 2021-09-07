programa
{
	
	funcao inicio()
	{
		real RJP,medsal=0,medfil=0,Mrjp=0
		inteiro rjp,Prjp=0,pprjp=0

          escreva("Qual o valor do salário do ",Prjp+1," habitante?\n")
		leia(RJP)
		escreva("Quantos filhos tem o ",Prjp+1," habitante?\n")
		leia(rjp) 
          enquanto(RJP>0){
		  se(RJP<0){
		  	 pare
		  	}
		  senao{
		        escreva("Qual o valor do salário do ",Prjp+2,"° habitante?\n")
		        leia(RJP)
		        escreva("Quantos filhos tem o ",Prjp+2,"° habitante?\n")
		        leia(rjp) 	
		  	     medsal=RJP+medsal
		      	medfil=medfil+rjp
		          se(RJP<=100){
		  		 pprjp++}
		  		se(RJP>=Mrjp){
               	 Mrjp=RJP
		  		}
		  	  Prjp++
		  	}
		     }
		escreva("\nA média do salário da pupulação é:\n",medsal/Prjp)
		escreva("\nA média do numero de filhos por habitante é:\n",medfil/Prjp)
		escreva("\nO valor do maior salário é de:\n",Mrjp)
		escreva("\nO percentual de pessoas com salário de até R$ 100 é:\n",pprjp/Prjp*100)	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 574; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */