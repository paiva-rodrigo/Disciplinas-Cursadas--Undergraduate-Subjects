package EstoqueDeTapeteClasses;

class TapeteRetangular extends Tapete{
    int Largura;
    int Comprimento;

    public int getLargura() {
        return Largura;
    }

    public void setLargura(int Largura) {
        this.Largura = Largura;
        MudaTamanho();
    }

    public int getComprimento() {
        return Comprimento;
    }

    public void setComprimento(int Comprimento) {
        this.Comprimento = Comprimento;
        
    }
    
    public TapeteRetangular(){
        this.setTipo("Retangular");
    }
    public void MudaTamanho(){
        this.setTamanho(this.Largura*this.Comprimento);
    }
}
