import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class JCheckBoxTest extends JFrame implements ActionListener{
	JCheckBox red=new JCheckBox("Red");
	JCheckBox green=new JCheckBox("Green");
	JCheckBox blue=new JCheckBox("Blue");
	JPanel p=new JPanel();

	JCheckBoxTest(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Change Background");

		p.add(red);
		p.add(green);
		p.add(blue);
		add(p);

		red.addActionListener(this);
		green.addActionListener(this);
		blue.addActionListener(this);
		p.setBackground(Color.BLACK);
	}
	public void actionPerformed(ActionEvent e){
		int x=0,y=0,z=0;

		if(red.isSelected())
			x=255;
		if(green.isSelected())
			y=255;
		if(blue.isSelected())
			z=255;
		p.setBackground(new Color(x,y,z));
	}
	public static void main(String[] args){
		JCheckBoxTest f=new JCheckBoxTest();
		f.setDefaultCloseOperation(EXIT_ON_CLOSE);
		f.setVisible(true);
	}
}