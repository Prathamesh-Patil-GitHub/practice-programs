import java.awt.*;
class FlowLayoutTest extends Frame{
	FlowLayoutTest(){
		setLocation(300,300);
		setSize(400,400);
		setTitle("Flow Layout Test");
		setLayout(new FlowLayout(FlowLayout.LEFT,10,10));
		for(int i=1;i<=20;i++){
			Button b=new Button("Button "+i);
			add(b);
		}
	}
	public static void main(String[] args){
		FlowLayoutTest f=new FlowLayoutTest();
		f.setVisible(true);
	}
}