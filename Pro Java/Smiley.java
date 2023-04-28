/*<APPLET CODE="Smiley.class" WIDTH=900 HEIGHT=900>
	</APPLET>*/
import java.awt.*;
import java.applet.*;

public class Smiley extends Applet{
	public void paint(Graphics g){
		g.drawOval(100,100,200,200);		//face
		g.fillArc(140,210,120,70,180,180);	//mouth
		g.drawOval(160,150,30,25);			//right eye
		g.drawOval(210,150,30,25);			//left eye
		g.fillOval(220,160,10,10);			//left pupil
		g.fillOval(170,160,10,10);			//right pupil
	}

}