package EstoqueDeTapeteClasses;
import java.awt.event.*;
import javax.swing.*;
class NovoTapeteRetangular extends JDialog{
    JButton jbtCadastrar1, jbtFechar1;
        JLabel jlMat,jlNumReg,jlCol,jlPreco,jlComp,jlLarg;
	JTextField jtfComp,jtfLarg, jtfMat, jtfNumReg, jtfCol,jtfPreco;
	Main mn;
        
    public NovoTapeteRetangular(Main r) {
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
        jbtFechar1.setBounds(10,420,150,30);
        jbtFechar1.addActionListener(obj);
        add(jbtFechar1);

        //textfield
        jtfPreco = new JTextField();
        jtfPreco.setText("");
        jtfPreco.setBounds(200,360,150,30);
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
        jtfLarg = new JTextField();
        jtfLarg.setText("");
        jtfLarg.setBounds(200,240,150,30);
        add(jtfLarg);
        jtfComp = new JTextField();
        jtfComp.setText("");
        jtfComp.setBounds(200,300,150,30);
        add(jtfComp);
        

        //textlabel
        jlPreco = new JLabel();
        jlPreco.setText("Preço por m^2:");
        jlPreco.setBounds(50, 360, 150, 30);
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
        jlLarg = new JLabel();
        jlLarg.setText("Largura(m):");
        jlLarg.setBounds(50, 240, 150, 30);
        add(jlLarg);
        jlComp = new JLabel();
        jlComp.setText("Comprimento(m):");
        jlComp.setBounds(50, 300, 150, 30);
        add(jlComp);
        
        setBounds(10,10,500,500);

}

public class Handler implements ActionListener{
        public void actionPerformed(ActionEvent e){
                if(e.getSource() == jbtCadastrar1){
                        TapeteRetangular aux = new TapeteRetangular();
                        aux.setMaterial(jtfMat.getText());
                        aux.setColoracao(jtfCol.getText());
                        aux.setNumeroRegistro(jtfNumReg.getText());
                        aux.setComprimento(Integer.parseInt(jtfComp.getText()));
                        aux.setLargura(Integer.parseInt(jtfLarg.getText()));
                        aux.setPrecoMetro(Integer.parseInt(jtfPreco.getText()));
                        mn.cadastra(aux);
                        jtfMat.setText("");
                        jtfCol.setText("");
                        jtfNumReg.setText("");
                        jtfLarg.setText("");
                        jtfComp.setText("");
                        jtfPreco.setText("");
                }
                if(e.getSource() == jbtFechar1){
                        setVisible(false);
                }
        }
}
}