import java.awt.*;
import java.awt.event.*;
class DigitTitleFrame extends Frame implements ActionListener{
	Button[] b=new Button[10];
	Button back=new Button("Back");
	DigitTitleFrame(){
		this.setFont(new Font("Arial",Font.BOLD,20));
		setSize(600,500);
		setTitle("Number: ");
		setLocation(50,50);
		setLayout(new GridLayout(4,3));
		b[0]=new Button("0");
		b[0].addActionListener(this);
		for(int i=1;i<10;i++){
			b[i]=new Button(String.valueOf(i));
			add(b[i]);
			b[i].addActionListener(this);
		}
		add(b[0]);
		add(back);
		back.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e){
		String label=e.getActionCommand();
		String title=getTitle();
		if(label.equals("Back")){
			if(!title.equals("Number: "))
				setTitle(title.substring(0,title.length()-1));
		}
		else
			setTitle(title+label);
	}
	public static void main(String[] args){
		DigitTitleFrame f=new DigitTitleFrame();
		f.setVisible(true);
	}
}