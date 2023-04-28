import java.awt.event.*;
import java.awt.*;
import javax.swing.*;
class PopupTest extends JFrame{
	JPopupMenu popup=new JPopupMenu();
	PopupTest(){
		setSize(500,500);
		setTitle("Try Right Clicking: ");
		popup.add("Properties");
		popup.addSeparator();
		popup.add("Align");
		popup.add("Format Document");
		popup.addSeparator();
		popup.add("Sections");
		popup.add("Frame Dividing");
		JPanel p=new JPanel();
		p.add(popup);
		add(p);
		addMouseListener(new MouseAdapter(){
			public void mouseReleased(MouseEvent e){
				if(e.isPopupTrigger())
					popup.show(e.getComponent(),e.getX(),e.getY());
			}
		});
	}
	public static void main(String[] args){
		PopupTest f=new PopupTest();
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setVisible(true);
	}
}