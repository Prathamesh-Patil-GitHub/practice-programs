import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class ProgressTest{
	public static void main(String[] args){
		JFrame f=new JFrame();
		f.setSize(600,600);
		f.setLayout(new FlowLayout());
		JButton install=new JButton("Install");
		f.add(install);
		JProgressBar pb=new JProgressBar(0,500);
		f.add(pb);
		pb.setStringPainted(true);
		install.addActionListener((ActionEvent e)->{
			Thread t=new Thread(()->{
				for(int i=0;i<=500;i+=20){
					try{Thread.sleep(50);}catch(Exception ex){}
					pb.setValue(i);
				}
			});
			t.start();
		});
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setVisible(true);
	}

}