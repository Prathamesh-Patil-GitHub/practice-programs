/*<APPLET CODE="DoraemonApplet.class" WIDTH=700 HEIGHT=700>
</APPLET>*/
import java.awt.*;
import java.applet.*;
public class DoraemonApplet extends Applet{
	public void paint(Graphics g){
		g.setColor(new Color(80,80,255));
		g.fillOval(100,100,200,200);		//Face

		g.setColor(Color.WHITE);
		g.fillOval(120,135,160,150);		//Inner Face

		g.setColor(Color.BLACK);
		g.drawOval(200,110,40,50);			//Left Eye
		g.drawOval(160,110,40,50);			//Right Eye
		g.setColor(Color.WHITE);
		g.fillOval(200,110,40,50);			//Left Eye Color
		g.fillOval(160,110,40,50);			//Right Eye Color

		g.setColor(Color.BLACK);
		g.fillOval(210,130,18,28);			//Left Pupil
		g.fillOval(170,130,18,28);			//Right Pupil
		g.setColor(Color.WHITE);
		g.fillOval(215,135,10,15);			//Left Pupil Shade
		g.fillOval(175,135,10,15);			//Right Pupil Shade

		g.setColor(Color.RED);
		g.fillOval(188,150,25,25);			//Nose
		g.setColor(new Color(255,90,90));
		g.fillOval(194,153,7,7);			//Nose Shade

		g.setColor(Color.BLACK);
		g.drawLine(200,175,200,225);		//Moustache
		g.drawLine(190,185,130,170);
		g.drawLine(190,200,120,200);
		g.drawLine(190,215,130,230);
		g.drawLine(210,185,270,170);
		g.drawLine(210,200,280,200);
		g.drawLine(210,215,270,230);

		g.setColor(new Color(255,20,20));	//Mouth
		g.fillArc(150,190,100,75,180,180);
		g.setColor(new Color(255,90,90));
		g.fillArc(176,250,50,30,17,145);
	}
}