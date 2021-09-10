package EstoqueDeTapeteClasses;
import java.awt.event.*;
import java.util.Vector;
import javax.swing.JButton;
import javax.swing.JFrame;

public class Main extends JFrame {
    JButton CC, Cancelar,MostrarTapetes, ComprarTapete,MostrarTapetesComprados;
    Vector <Tapete> tapetes = new Vector<Tapete>();
    NovoTapete v = new NovoTapete(this);
    public Main(){
        getContentPane().setLayout(null);
        setTitle("Principal");
        Handler objeto = new Handler();

        //Parte dos botoes
        MostrarTapetes = new JButton("Mostrar de Tapetes");
        MostrarTapetes.setBounds(10,10,250,30);
        MostrarTapetes.addActionListener(objeto);
        add(MostrarTapetes);
        MostrarTapetesComprados = new JButton("Mostrar de Tapetes Vendidos");
        MostrarTapetesComprados.setBounds(10,40,250,30);
        MostrarTapetesComprados.addActionListener(objeto);
        add(MostrarTapetesComprados);
        ComprarTapete = new JButton("Comprar de Tapetes");
        ComprarTapete.setBounds(10,70,250,30);
        ComprarTapete.addActionListener(objeto);
        add(ComprarTapete);
        CC = new JButton("Cadastro de Tapete");
        CC.setBounds(10,100,250,30);
        CC.addActionListener(objeto);
        add(CC);
        Cancelar = new JButton("Cancelar");
        Cancelar.setBounds(10,130,250,30);
        Cancelar.addActionListener(objeto);
        add(Cancelar);
        
        setBounds(100,100,300,300);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public class Handler implements ActionListener{
        public void actionPerformed(ActionEvent e){
            if(e.getSource()==CC){
                    v.setVisible(true);
            }
            if(e.getSource()==Cancelar) {
                    setVisible(false);
            }
            if(e.getSource()==ComprarTapete) {
                    new ComprarTapete(tapetes);
            }
            if(e.getSource()==MostrarTapetes) {
                    new ExibirTapetes(tapetes);
            }
            if(e.getSource()==MostrarTapetesComprados) {
                    new ExibirTapetesVendidos(tapetes);
            }
        }
    }
    public static void main(String[] args) {
        new Main();
    }
    public void cadastra(Tapete c){
            tapetes.add(c);
    }
}
