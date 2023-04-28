import java.awt.*;
import java.awt.event.*;
class KeyLineDraw extends Frame{
	int x=80,y=80;

	KeyLineDraw(){
		setSize(500,500);
		setLocation(50,50);
		setTitle("Line Drawing");

		addKeyListener(new KeyAdapter(){
				public void keyPressed(KeyEvent e){
					if(e.getKeyCode()==KeyEvent.VK_UP)
						y--;
					else if(e.getKeyCode()==KeyEvent.VK_DOWN)
						y++;
					else if(e.getKeyCode()==KeyEvent.VK_RIGHT)
						x++;
					else if(e.getKeyCode()==KeyEvent.VK_LEFT)
						x--;

					getGraphics().fillOval(x,y,5,5);
				}
			});
	}
	public static void main(String[] args){
		KeyLineDraw f=new KeyLineDraw();

		f.addWindowListener(new WindowAdapter(){
				public void windowClosing(WindowEvent e){
					f.dispose();
				}
			});

		f.setVisible(true);
	}
}