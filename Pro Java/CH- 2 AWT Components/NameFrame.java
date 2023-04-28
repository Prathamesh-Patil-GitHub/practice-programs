import java.awt.*;
import java.awt.event.*;
class NameFrame extends Frame{
	Label nameLabel=new Label("Name: ");
	TextField nameTf=new TextField(25);
	TextArea namesTa=new TextArea("");
	Panel north=new Panel();
	NameFrame(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Add Names: ");
		namesTa.setEditable(false);

		north.add(nameLabel);
		north.add(nameTf);
		north.setBackground(Color.CYAN);
		nameTf.addActionListener((ActionEvent e)->{
			namesTa.append(nameTf.getText()+"\n");
		});

		add(north,"North");
		add(namesTa);
	}
	public static void main(String[] args){
		NameFrame f=new NameFrame();
		f.setVisible(true);
	}
}