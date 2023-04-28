import java.awt.*;
import java.awt.event.*;
class RectFillFrame extends Frame{
	int x=100,y=100,width=200,height=200,xTemp,yTemp,cc;
	RectFillFrame(){
		setSize(600,600);
		setLocation(100,100);
		setTitle("Fill Rectangle:");
		setVisible(true);
		addMouseListener(new MouseHandler());
	}
	class MouseHandler extends MouseAdapter{
		public void mouseClicked(MouseEvent e){
			xTemp=e.getX();
			yTemp=e.getY();
			cc=e.getClickCount();
			repaint();
		}
	}
	public void paint(Graphics g){
		g.drawRect(x,y,width,height);
		if(xTemp>x && yTemp>y && xTemp<(x+width) && yTemp<(y+height) && (cc==2)){
			g.setColor(Color.RED);
			g.fillRect(x,y,width,height);
		}
	}
	public static void main(String[] args){
		RectFillFrame f=new RectFillFrame();
	}
}