import java.awt.*;
import java.awt.event.*;
import java.io.*;
class DoubleChoice extends Frame{
	Choice state=new Choice();
	Choice dist=new Choice();
	DoubleChoice(){
		setSize(600,500);
		setLocation(100,100);
		setTitle("Select Zone:");

		Panel p1=new Panel();
		p1.add(new Label("State:"));
		p1.setBackground(Color.RED);
		p1.add(state);
		String[] states={"Select","Maharashtra","Gujarat","Madhya Pradesh","Karnataka","Other"};
		for(String s:states)
			state.add(s);

		Panel p2=new Panel();
		p2.add(new Label("District:"));
		p2.setBackground(Color.GREEN);
		dist.add("Select              ");
		p2.add(dist);

		state.addItemListener((ItemEvent e)->{
			dist.removeAll();
			try{
				BufferedReader f=new BufferedReader(new FileReader(state.getSelectedItem()+".txt"));
				String temp=f.readLine();
				while(temp!=null){
					dist.add(temp);
					temp=f.readLine();
				}
				f.close();
			}catch(Exception ex){}
		});

		add(p1,"North");
		add(p2);
	}
	public static void main(String[] args){
		DoubleChoice f=new DoubleChoice();
		f.setVisible(true);
	}

}