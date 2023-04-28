import java.awt.*;
import java.awt.event.*;
class RectDrawFrame extends Frame{
	Point start=new Point();
	Point end=new Point();
	RectDrawFrame(){
		setSize(600,600);
		setLocation(100,100);
		setTitle("Draw Rectangle:");
		addMouseMotionListener(new MouseMotionHandler());
		addMouseListener(new MouseHandler());
	}
	class MouseHandler extends MouseAdapter{
		public void mousePressed(MouseEvent e){
			start.setLocation(e.getX(),e.getY());
		}
		public void mouseReleased(MouseEvent e){
			end.setLocation(e.getX(),e.getY());
			repaint();
		}
	}
	class MouseMotionHandler extends MouseMotionAdapter{
		public void mouseDragged(MouseEvent e){
			end.setLocation(e.getX(),e.getY());
			repaint();
		}
	}
	public void paint(Graphics g){
		int x=(int)start.getX();
		int y=(int)start.getY();
		int width=(int)end.getX()-x;
		int height=(int)end.getY()-y;

		g.drawRect(x,y,width,height);
	}
	public static void main(String[] args){
		RectDrawFrame f=new RectDrawFrame();
		f.addWindowListener(new WindowAdapter(){
				public void windowClosing(WindowEvent e){
					f.dispose();
				}
			});
		f.setVisible(true);
	}
}