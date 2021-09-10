package EstoqueDeTapeteClasses;
import java.awt.event.*;
import javax.swing.*;

public class NovoTapete extends JDialog{
    JButton jbtTapeteQuadrado,jbtFechar1, jbtTapeteCircular,jbtTapeteRetangular ;
    Main mn;
    NovoTapeteQuadrado tq;
    NovoTapeteRetangular tr;
    NovoTapeteCircular tc;
    public NovoTapete(Main r) {
        this.mn = r;
        getContentPane().setLayout(null);
        Handler obj = new Handler();
        setTitle("Cadastro de Tapetes");    
        
        tq = new NovoTapeteQuadrado(this.mn);
        tr = new NovoTapeteRetangular(this.mn);
        tc = new NovoTapeteCircular(this.mn);
        //botoes
        jbtTapeteQuadrado = new JButton("Tapete Quadrado");
        jbtTapeteQuadrado.setBounds(10,10,250,30);
        jbtTapeteQuadrado.addActionListener(obj);
        add(jbtTapeteQuadrado);
        jbtTapeteCircular = new JButton("Tapete Circular");
        jbtTapeteCircular.setBounds(10,60,250,30);
        jbtTapeteCircular.addActionListener(obj);
        add(jbtTapeteCircular);
        jbtTapeteRetangular = new JButton("Tapete Retangular");
        jbtTapeteRetangular.setBounds(10,110,250,30);
        jbtTapeteRetangular.addActionListener(obj);
        add(jbtTapeteRetangular);
        jbtFechar1 = new JButton("Voltar");
        jbtFechar1.setBounds(10,340,150,30);
        jbtFechar1.addActionListener(obj);
        add(jbtFechar1);

        setBounds(10,10,400,500);
}
public class Handler implements ActionListener{
        public void actionPerformed(ActionEvent e){
                if(e.getSource() == jbtTapeteQuadrado){
                        tq.setVisible(true);
                }
                if(e.getSource() == jbtTapeteCircular){
                        tc.setVisible(true);
                }
                if(e.getSource() == jbtTapeteRetangular){
                        tr.setVisible(true);
                }
                if(e.getSource() == jbtFechar1){
                        setVisible(false);
                }
        }
}
}