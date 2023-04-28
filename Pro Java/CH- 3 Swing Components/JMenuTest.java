import java.awt.event.*;
import java.awt.*;
import javax.swing.*;
class JMenuTest extends JFrame{
	JMenuBar mb=new JMenuBar();
	JMenu file=new JMenu("File");
	JMenuItem n=new JMenuItem("New",new ImageIcon("owl.png"));
	JMenuItem exit=new JMenuItem("Exit",new ImageIcon("exit.png"));

	JMenuTest(){
		setSize(500,500);

		mb.add(file);
		n.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_N,InputEvent.CTRL_MASK));
		exit.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_X,InputEvent.CTRL_MASK+InputEvent.SHIFT_MASK));
		file.add(n);
		file.add("open");
		file.add("Save");
		file.addSeparator();
		file.add(exit);
		setJMenuBar(mb);

		n.addActionListener((ActionEvent e)->{
			setTitle("Action Performed: New Pressed");
		});
		exit.addActionListener((ActionEvent e)->{
					setTitle("Action Performed: Exit Pressed");
					System.exit(0);
		});
		add(new JLabel(new ImageIcon("logo.png")));
	}
	public static void main(String[] args){
		JMenuTest f=new JMenuTest();
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setVisible(true);
	}
}