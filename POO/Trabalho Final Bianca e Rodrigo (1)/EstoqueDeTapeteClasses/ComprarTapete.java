package EstoqueDeTapeteClasses;
import java.awt.event.*;
import java.util.Vector;
import javax.swing.*;
public class ComprarTapete extends JDialog{
	JButton jbtFechar,jbtConfirmar;
        JTextField jtfId;
	Vector<Tapete> tapetes;
        JLabel jlnometela,jtfInfo;
	public ComprarTapete(Vector<Tapete> v) {
		tapetes = v;
		getContentPane().setLayout(null);
		setTitle("Comprar tapete");
		Handler obj = new Handler(); 
                
                jbtConfirmar = new JButton("Confirmar");
                jbtConfirmar.setBounds(10,10,150,30);
                jbtConfirmar.addActionListener(obj);
                add(jbtConfirmar);
                jbtFechar = new JButton("Sair");
                jbtFechar.setBounds(10,100,150,30);
                jbtFechar.addActionListener(obj);
                add(jbtFechar);
                //textlabel
                jlnometela = new JLabel();
                jlnometela.setText("Digite a id do tapete comprado:");
                jlnometela.setBounds(10, 40, 180, 30);
                add(jlnometela);
                jtfId = new JTextField();
                jtfId.setText("");
                jtfId.setBounds(200, 40, 100, 30);
                add(jtfId);
                jtfInfo = new JLabel();
                jtfInfo.setText("");
                jtfInfo.setBounds(100, 150, 300, 30);
                add(jtfInfo);
                
                setBounds(120,120,450,250);
		setVisible(true);
        }
        
        public class Handler implements ActionListener{
		public void actionPerformed(ActionEvent e){
			if(e.getSource() == jbtFechar) {
				setVisible(false);
			}
                        if(e.getSource() == jbtConfirmar) {
				int ident = Integer.parseInt(jtfId.getText());
                                int i = 0;
                                while(true){
                                    int a =Integer.parseInt(tapetes.get(i).getNumeroRegistro());
                                    if( a == ident){
                                        tapetes.get(i).setNumeroRegistro("-1");
                                        jtfId.setText("");
                                    }
                                    if( a ==  -1){
                                        jtfInfo.setText("TAPETE JA VENDIDO");
                                    }else{
                                        jtfInfo.setText("Compra Efetuada");
                                    }
                                    i = i+1;
                                }
			}
		}
	}
}