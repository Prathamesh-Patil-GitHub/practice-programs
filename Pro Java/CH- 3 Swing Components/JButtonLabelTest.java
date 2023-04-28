import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class JButtonLabelTest extends JFrame{
	JLabel l=new JLabel("This is Label");
	Panel p=new Panel();
	String[] btns={"Left","Center","Right"};

	JButtonLabelTest(){
		setSize(600,600);
		setTitle("Testing Swing Components");
		setLocation(100,100);
		l.setFont(new Font("Times New Roman",Font.ITALIC,30));

		for(int i=0;i<btns.length;i++){
			JButton b=new JButton(btns[i]);
			p.add(b);
			b.addActionListener((ActionEvent e)->{
				String cmd=e.getActionCommand();
				if(cmd.equals("Left"))
					l.setHorizontalAlignment(JLabel.LEFT);
				else if(cmd.equals("Center"))
					l.setHorizontalAlignment(JLabel.CENTER);
				else
					l.setHorizontalAlignment(JLabel.RIGHT);
			});
		}

		add(p);
		add(l,"North");
	}
	public static void main(String[] args){
		JButtonLabelTest f=new JButtonLabelTest();
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setVisible(true);
	}
}