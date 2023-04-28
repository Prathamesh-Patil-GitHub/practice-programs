import java.awt.*;
import java.awt.event.*;

class AdderFrame extends Frame{
	Label numLabel=new Label("Number: ");
	Label sumLabel=new Label("   Sum: ");
	TextField numTf=new TextField("0",10);
	TextField sumTf=new TextField("0",10);
	Button addBtn=new Button("Add");
	Button resetBtn=new Button("Reset");
	Button quitBtn=new Button("Quit");

	AdderFrame(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Adder Frame:");
		setLayout(new FlowLayout(FlowLayout.CENTER,10,0));
		sumTf.setEditable(false);

		add(numLabel);
		add(numTf);
		add(sumLabel);
		add(sumTf);
		add(addBtn);
		add(resetBtn);
		add(quitBtn);

		addBtn.addActionListener((ActionEvent e)->{
				double num=Double.parseDouble(numTf.getText());
				double sum=Double.parseDouble(sumTf.getText());
				sumTf.setText(Double.toString(num+sum));
			});
		resetBtn.addActionListener((ActionEvent e)->{
				sumTf.setText("0");
				numTf.setText("0");
			});
		quitBtn.addActionListener((ActionEvent e)->{dispose();});
	}
	public static void main(String[] args) throws Exception{
		AdderFrame f=new AdderFrame();
		f.setVisible(true);
	}
}