programa
{
	
	funcao inicio()
	{ 
	   real rjp1,rjp2,rjp3
		escreva(" O valor de um lado do triângulo é:\n")
		leia(rjp1)
		escreva(" O valor do outro lado do triângulo é:\n")
		leia(rjp2)
		escreva(" O valor do último lado do triângulo é:\n")
		leia(rjp3)
		     se(rjp1<=0 ou rjp2<=0 ou rjp3<=0){
			     escreva("\n Não se pode formar um triângulo com essas medidas de lado")
		      }
		     senao se((rjp1+rjp2)>rjp3 e (rjp2+rjp3)>rjp1 e (rjp1+rjp3)>rjp2){
			    escreva("\n É possível se fazer um triângulo com essas medidas de lado")
			se (rjp1==rjp2 e rjp3==rjp2){
				escreva("\n Esse triângulo é Equilátero")
			}	
			senao se(rjp1==rjp2 ou rjp1==rjp3 ou rjp2==rjp3 ){
				escreva("\n Esse triângulo é Isósceles")
		     }
	     	senao {
	     		escreva("\n Esse triângulo é Escaleno")
	     	}
		     }
		     senao{
			     escreva("\n Não se pode formar um triângulo com essas medidas de lado")
		     }
		
	} 
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 307; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */