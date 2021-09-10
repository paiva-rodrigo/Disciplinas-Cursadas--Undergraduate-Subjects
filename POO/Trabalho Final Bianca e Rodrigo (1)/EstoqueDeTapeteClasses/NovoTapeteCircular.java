package EstoqueDeTapeteClasses;
import java.awt.event.*;
import javax.swing.*;

class NovoTapeteCircular  extends JDialog{
    JButton jbtCadastrar1, jbtFechar1;
        JLabel jlMat,jlTam,jlNumReg,jlCol,jlPreco;
	JTextField jtfTam, jtfMat, jtfNumReg, jtfCol,jtfPreco;
	Main mn;
        
    public NovoTapeteCircular(Main r) {
        this.mn = r;
        getContentPane().setLayout(null);
        Handler obj = new Handler();
        setTitle("Cadastro de Tapetes");

        //botoes
        jbtCadastrar1 = new JButton("Cadastrar");
        jbtCadastrar1.setBounds(10,10,250,30);
        jbtCadastrar1.addActionListener(obj);
        add(jbtCadastrar1);
        jbtFechar1 = new JButton("Voltar");
        jbtFechar1.setBounds(10,340,150,30);
        jbtFechar1.addActionListener(obj);
        add(jbtFechar1);

        //textfield
        jtfPreco = new JTextField();
        jtfPreco.setText("");
        jtfPreco.setBounds(200,300,150,30);
        add(jtfPreco);
        jtfCol = new JTextField();
        jtfCol.setText("");
        jtfCol.setBounds(200,60,150,30);
        add(jtfCol);
        jtfMat = new JTextField();
        jtfMat.setText("");
        jtfMat.setBounds(200,120,150,30);
        add(jtfMat);
        jtfNumReg = new JTextField();
        jtfNumReg.setText("");
        jtfNumReg.setBounds(200,180,150,30);
        add(jtfNumReg);
        jtfTam = new JTextField();
        jtfTam.setText("");
        jtfTam.setBounds(200,240,150,30);
        add(jtfTam);
        

        //textlabel
        jlPreco = new JLabel();
        jlPreco.setText("Preço por m^2:");
        jlPreco.setBounds(50, 300, 150, 30);
        add(jlPreco);
        jlCol = new JLabel();
        jlCol.setText("Coloração:");
        jlCol.setBounds(50, 60, 150, 30);
        add(jlCol);
        jlMat = new JLabel();
        jlMat.setText("Material:");
        jlMat.setBounds(50, 120, 150, 30);
        add(jlMat);
        jlNumReg = new JLabel();
        jlNumReg.setText("Numero Registro:");
        jlNumReg.setBounds(50, 180, 150, 30);
        add(jlNumReg);
        jlTam = new JLabel();
        jlTam.setText("Raio(m):");
        jlTam.setBounds(50, 240, 150, 30);
        add(jlTam);
        
        setBounds(10,10,400,500);

}

public class Handler implements ActionListener{
        public void actionPerformed(ActionEvent e){
                if(e.getSource() == jbtCadastrar1){
                        TapeteCircular aux = new TapeteCircular();
                        aux.setMaterial(jtfMat.getText());
                        aux.setColoracao(jtfCol.getText());
                        aux.setNumeroRegistro(jtfNumReg.getText());
                        aux.setRaio(Integer.parseInt(jtfTam.getText()));
                        aux.setPrecoMetro(Integer.parseInt(jtfPreco.getText()));
                        mn.cadastra(aux);
                        jtfMat.setText("");
                        jtfCol.setText("");
                        jtfNumReg.setText("");
                        jtfTam.setText("");
                        jtfPreco.setText("");
                }
                if(e.getSource() == jbtFechar1){
                        setVisible(false);
                }
        }
}
}