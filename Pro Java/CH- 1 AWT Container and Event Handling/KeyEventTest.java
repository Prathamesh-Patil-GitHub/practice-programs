import java.awt.*;
import java.awt.event.*;
class KeyEventTest extends Frame{
	int code;
	KeyEventTest(){
		setSize(500,500);
		setLocation(50,50);
		setTitle("Key Event Test");
		addKeyListener(new KeyAdapter(){
				public void keyPressed(KeyEvent e){
					code=e.getKeyCode();
					repaint();
				}
			});
	}
	public void paint(Graphics g){
		if(code==KeyEvent.VK_R)
			g.drawRect(50,50,300,200);
		if(code==KeyEvent.VK_L)
			g.drawLine(50,50,300,200);
		if(code==KeyEvent.VK_C)
			g.drawOval(50,50,300,200);
	}
	public static void main(String[] args){
		KeyEventTest f=new KeyEventTest();
		f.addWindowListener(new WindowAdapter(){
				public void windowClosing(WindowEvent e){
					f.dispose();
				}
			});
		f.setVisible(true);
	}
}