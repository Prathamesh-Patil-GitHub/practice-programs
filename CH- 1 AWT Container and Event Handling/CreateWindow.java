import java.awt.*;
import java.awt.event.*;
class CreateWindow extends Frame{
    Button b=new Button("Create Window");
    CreateWindow(){
        setSize(500,500);
        setLocation(50,50);
        setTitle("Window Creator");
        setLayout(new FlowLayout(FlowLayout.CENTER,30,30));
        add(b);
        b.addActionListener((ActionEvent e)->{
                SampleFrame f=new SampleFrame();
                f.setVisible(true);
            });
    }
    public static void main(String[] args) {
        CreateWindow f=new CreateWindow();
        f.setVisible(true);
    }
}
class SampleFrame extends Frame{
	static int loc=1;
	SampleFrame(){
		setSize(400,400);
		setLocation(20*loc,20*loc);
		setTitle("My Frame "+loc);
		loc++;
	}
}