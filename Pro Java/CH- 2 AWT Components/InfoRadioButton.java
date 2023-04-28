import java.awt.*;
import java.awt.event.*;
class InfoRadioButton extends Frame{
	Panel north=new Panel();
	Panel center=new Panel();
	TextField nameTf=new TextField(30);
	CheckboxGroup gender=new CheckboxGroup();
	Checkbox male=new Checkbox("Male",gender,false);
	Checkbox female=new Checkbox("Female",gender,false);
	Button print=new Button("Print");
	TextArea info=new TextArea();

	InfoRadioButton(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Info Print Frame: ");
		info.setFont(new Font("Arial",Font.BOLD,20));

		north.add(new Label("Name:"));
		north.add(nameTf);
		center.setLayout(new FlowLayout(FlowLayout.CENTER,150,50));
		center.add(male);
		center.add(female);
		center.add(print);

		add(north,"North");
		add(center);
		add(info,"South");

		print.addActionListener((ActionEvent e)->{
			if(gender.getSelectedCheckbox()!=null){
				info.append("Name: "+nameTf.getText()+"\n");
				info.append("--------------------------------------------\n");
				info.append("Gender: "+gender.getSelectedCheckbox().getLabel()+"\n");
				info.append("--------------------------------------------\n");
			}
		});
	}

	public static void main(String[] args){
		InfoRadioButton f=new InfoRadioButton();
		f.setVisible(true);
	}

}