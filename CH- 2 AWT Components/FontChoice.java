import java.awt.*;
import java.awt.event.*;
class FontChoice extends Frame{
	Choice font=new Choice();
	Label label=new Label("Info Planet",Label.CENTER);
	FontChoice(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Set the Font Size");
		label.setFont(new Font("Arial",Font.PLAIN,10));

		for(int i=1;i<=50;i++)
			font.add(Integer.toString(i));

		font.select(10);

		Panel p=new Panel();
		p.setBackground(Color.LIGHT_GRAY);
		p.add(font);
		add(p,"North");
		add(label);

		font.addItemListener((ItemEvent e)->{
			label.setFont(new Font("Arial",Font.PLAIN,Integer.valueOf(font.getSelectedItem())));
		});
	}
	public static void main(String[] args){
		FontChoice f=new FontChoice();
		f.setVisible(true);
	}
}