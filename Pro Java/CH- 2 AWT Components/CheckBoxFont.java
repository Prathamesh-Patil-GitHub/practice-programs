import java.awt.*;
import java.awt.event.*;
class CheckBoxFont extends Frame implements ItemListener{
	Label label=new Label("Info Planet");
	Panel center=new Panel();
	Checkbox bold=new Checkbox("BOLD");
	Checkbox italic=new Checkbox("ITALIC");
	CheckBoxFont(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Change The Font Style: ");

		label.setBackground(Color.CYAN);
		label.setFont(new Font("Arial",Font.PLAIN,30));

		center.add(bold);
		center.add(italic);

		add(center);
		add(label,"North");

		bold.addItemListener(this);
		italic.addItemListener(this);
	}
	public void itemStateChanged(ItemEvent e){
		if(bold.getState() && italic.getState())
			label.setFont(new Font("Arial",Font.BOLD+Font.ITALIC,30));
		else if(bold.getState())
			label.setFont(new Font("Arial",Font.BOLD,30));
		else if(italic.getState())
			label.setFont(new Font("Arial",Font.ITALIC,30));
		else
			label.setFont(new Font("Arial",Font.PLAIN,30));
	}
	public static void main(String[] args){
		CheckBoxFont f=new CheckBoxFont();
		f.setVisible(true);
	}

}