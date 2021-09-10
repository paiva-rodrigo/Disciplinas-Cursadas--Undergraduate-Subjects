package EstoqueDeTapeteClasses;

public class TapeteQuadrado extends Tapete{
    private int lado;
    public TapeteQuadrado(){
        this.setTipo( "Quadrado");
    }
    public int getLado() {
        return lado;
    }

    public void setLado(int lado) {
        this.lado = lado; 
        MudaTamanho();
    }
    public void MudaTamanho(){
        this.setTamanho(this.lado*this.lado);
    }
    
    
}
