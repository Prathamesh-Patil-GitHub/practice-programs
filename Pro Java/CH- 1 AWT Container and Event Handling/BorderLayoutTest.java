import java.awt.*;
class BorderLayoutTest extends Frame{
	Button n=new Button("North");
	Button s=new Button("South");
	Button e=new Button("East");
	Button w=new Button("West");
	Button c=new Button("Center");
	BorderLayoutTest(){
		setLocation(300,300);
		setSize(400,400);
		setTitle("Border Layout Test");
		setLayout(new BorderLayout(50,50));
		add(n,BorderLayout.NORTH);
		add(s,BorderLayout.SOUTH);
		add(e,BorderLayout.EAST);
		add(w,"West");
		add(c,"Center");
	}
	public static void main(String[] args){
		BorderLayoutTest b=new BorderLayoutTest();
		b.setVisible(true);
	}
}