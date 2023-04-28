import java.awt.*;
import java.awt.event.*;
class ShowInfoFrame extends Frame{
	Button toggle=new Button("Hide");
	Button info=new Button("Info Planet");
	ShowInfoFrame(){
		setSize(600,500);
		setTitle("Control Info Planet");
		setLocation(50,50);
		setLayout(new FlowLayout(FlowLayout.CENTER,20,0));
		add(toggle);
		add(info);
		toggle.addActionListener((ActionEvent e)->{
				if(e.getActionCommand().equals("Hide")){
					info.setVisible(false);
					toggle.setLabel("Show");
				}
				else{
					info.setVisible(true);
					toggle.setLabel("Hide");
				}
			});
	}
	public static void main(String[] args){
		ShowInfoFrame f=new ShowInfoFrame();
		f.setVisible(true);
	}
}