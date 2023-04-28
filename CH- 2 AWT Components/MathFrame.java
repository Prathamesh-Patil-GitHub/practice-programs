import java.awt.*;
import java.awt.event.*;

class MathFrame extends Frame implements ActionListener{
    Label numLabel=new Label("Number:    ");
    TextField tf=new TextField(20);
    Panel north=new Panel();
    Panel center=new Panel();
    Label result=new Label("",Label.CENTER);
    MathFrame(){
		setSize(600,500);
		setTitle("Mathematics Frame:");
		setLocation(100,100);
        String[] actions={"Square","Cube","Square Root","Factorial"};
        for(int i=0;i<actions.length;i++){
            Button b=new Button(actions[i]);
            b.addActionListener(this);
            center.add(b);
        }
        center.setBackground(Color.LIGHT_GRAY);

        north.add(numLabel);
        north.add(tf);
        north.setBackground(Color.YELLOW);

        add(north,"North");
        add(center);
        add(result,"South");

		result.setBackground(Color.GREEN);

        north.setFont(new Font("Arial",Font.BOLD,25));
        result.setFont(new Font("Arial",Font.BOLD,25));
    }
    public void actionPerformed(ActionEvent e){
        try{
			String cmd=e.getActionCommand();
			double num=Double.parseDouble(tf.getText());
			if(cmd.equals("Square"))
				result.setText("Result: "+ num*num);
			else if(cmd.equals("Cube"))
				 result.setText("Result: "+ num*num*num);
			else if(cmd.equals("Square Root"))
				result.setText("Result: "+ Math.sqrt(num));
			else{
				double fact=1;
				for(int i=1;i<=num;i++){
					fact=fact*i;
				}
				result.setText("Result: "+ fact);
			}
		}
		catch(NumberFormatException ex){
			result.setText("Please enter valid value in TextBox");
		}
    }
    public static void main(String[] args) {
        MathFrame f=new MathFrame();
        f.setVisible(true);
    }
}