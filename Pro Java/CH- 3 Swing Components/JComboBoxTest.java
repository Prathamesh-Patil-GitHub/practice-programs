import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class JComboBoxTest extends JFrame{
	JComboBox <String>cb=new JComboBox<String>();
	JTextField tf=new JTextField(20);
	JButton addButton=new JButton("Add Item");
	JButton removeButton=new JButton("Remove Item");

	JComboBoxTest(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Manipulate Combo Box");

		JPanel n=new JPanel();
		n.add(cb);
		add(n,"North");

		JPanel c=new JPanel();
		c.add(new JLabel("Enter the item:    "));
		c.add(tf);
		c.add(addButton);
		c.add(removeButton);
		add(c);

		addButton.addActionListener((ActionEvent e)->{
			String s=tf.getText();
			if(!(s.equals("")))
				cb.addItem(s);
		});
		removeButton.addActionListener((ActionEvent e)->{
			cb.removeItem(tf.getText());
		});
	}
	public static void main(String[] args){
		JComboBoxTest f=new JComboBoxTest();
		f.setDefaultCloseOperation(EXIT_ON_CLOSE);
		f.setVisible(true);
	}
}