import java.awt.*;
import java.awt.event.*;
class LineDrawFrame extends Frame{
	Point start=new Point();
	Point end=new Point();
	LineDrawFrame(){
		setSize(600,600);
		setLocation(100,100);
		setTitle("Draw Line:");
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
		g.drawLine((int)start.getX(),(int)start.getY(),(int)end.getX(),(int)end.getY());
	}
	public static void main(String[] args){
		LineDrawFrame f=new LineDrawFrame();
		f.addWindowListener(new WindowAdapter(){
				public void windowClosing(WindowEvent e){
					f.dispose();
				}
			});
		f.setVisible(true);
	}
}