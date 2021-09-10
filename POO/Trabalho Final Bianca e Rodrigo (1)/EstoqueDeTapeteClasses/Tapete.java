package EstoqueDeTapeteClasses;
public class Tapete {
    private String Coloracao;
    private String NumeroRegistro;
    private String Material;
    private String Tipo ;
    private int Tamanho;
    private int PrecoMetro;
    public String getTipo() {
        return Tipo;
    }

    public void setTipo(String Tipo) {
        this.Tipo = Tipo;
    }
    
    
    
    public String getColoracao() {
        return Coloracao;
    }

    public void setColoracao(String Coloracao) {
        this.Coloracao = Coloracao;
    }

    public String getNumeroRegistro() {
        return NumeroRegistro;
    }

    public void setNumeroRegistro(String NumeroRegistro) {
        this.NumeroRegistro = NumeroRegistro;
    }

    public String getMaterial() {
        return Material;
    }

    public void setMaterial(String Material) {
        this.Material = Material;
    }

    public int getTamanho() {
        return Tamanho;
    }

    public void setTamanho(int Tamanho) {
        this.Tamanho = Tamanho;
    }

    public int getPrecoMetro() {
        return PrecoMetro;
    }

    public void setPrecoMetro(int PrecoMetro) {
        this.PrecoMetro = PrecoMetro;
    }
    public String todosDados() {
        int res = (getTamanho()*getPrecoMetro());
        String dado = "Tipo: "+getTipo()+" Coloração:" + getColoracao()+ " Material:" + getMaterial()+ " Identificação:" + getNumeroRegistro()+ " Preço:" + res+" Tamanho "+getTamanho();
		return dado;
	}

    
}
