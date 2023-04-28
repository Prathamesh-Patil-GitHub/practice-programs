import java.awt.*;
import java.awt.event.*;
class FeesCheckBox extends Frame{
	Label label=new Label("Total Fees of Selected Courses is: 0",Label.CENTER);
	Panel north=new Panel();
	Checkbox java=new Checkbox("Java 3000");
	Checkbox cpp=new Checkbox("C & C++ 5000");
	Checkbox advjava=new Checkbox("Advanced Java 3500");
	Checkbox python=new Checkbox("Python 3000");
	Checkbox android=new Checkbox("Android 4500");
	int fees=0;
	FeesCheckBox(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Fee Structure: ");

		label.setFont(new Font("Arial",Font.BOLD,25));

		north.add(cpp);
		north.add(java);
		north.add(advjava);
		north.add(python);
		north.add(android);

		add(north,"North");
		add(label);

		cpp.addItemListener((ItemEvent e)->{
				if(cpp.getState())
					fees+=5000;
				else
					fees-=5000;
				change();
			});
		java.addItemListener((ItemEvent e)->{
						if(java.getState())
							fees+=3000;
						else
							fees-=3000;
						change();
			});
		advjava.addItemListener((ItemEvent e)->{
						if(advjava.getState())
							fees+=3500;
						else
							fees-=3500;
						change();
			});
		python.addItemListener((ItemEvent e)->{
						if(python.getState())
							fees+=3000;
						else
							fees-=3000;
						change();
			});
		android.addItemListener((ItemEvent e)->{
						if(android.getState())
							fees+=4500;
						else
							fees-=4500;
						change();
			});
	}
	public void change(){
		label.setText("Total Fees of Selected Courses is: "+fees);
	}
	public static void main(String[] args){
		FeesCheckBox f=new FeesCheckBox();
		f.setVisible(true);
	}

}