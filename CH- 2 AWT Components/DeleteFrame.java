import java.awt.*;
import java.awt.event.*;
import java.io.*;
class DeleteFrame extends Frame{
	TextField tf=new TextField(20);
	Button get=new Button("Get File Names");
	Button delete=new Button("Delete");
	List files=new List(10,true);
	Label deleteLabel=new Label("                                                          ");
	DeleteFrame(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Permanent File Delete:");

		Panel north=new Panel();
		north.add(new Label("Enter Complete File Path:   "));
		north.add(tf);
		north.add(get);
		add(north,"North");
		add(files);

		Panel south=new Panel();
		south.add(deleteLabel);
		south.add(delete);
		add(south,"South");

		get.addActionListener((ActionEvent e)->{
			files.removeAll();
			File file=new File(tf.getText());
			if(file.exists()){
				String[] temp=file.list();
				for(String str:temp)
					files.add(str);
			}
			else
				tf.setText("Enter valid path !");
		});

		delete.addActionListener((ActionEvent e)->{
			int count=0;
			String[] selected=files.getSelectedItems();
			for(String temp:selected){
				File file=new File(tf.getText()+"\\"+temp);
				file.delete();
				files.remove(temp);
				count++;
			}
			deleteLabel.setText("No. of files deleted: "+count);
		});
	}
	public static void main(String[] args){
		DeleteFrame f=new DeleteFrame();
		f.setVisible(true);
	}

}