package EstoqueDeTapeteClasses;

public class TapeteCircular extends Tapete{
    private int raio;

    public int getRaio() {
        return raio;
    }

    public void setRaio(int raio) {
        this.raio = raio;
        MudaTamanho();
    }
    public TapeteCircular(){
        this.setTipo( "Circular");
    }
    
    public void MudaTamanho(){
        //usei aproximação de pi como 3, pois ja avia feito todo progama em int
        this.setTamanho((this.raio*this.raio)*3);
    }
}