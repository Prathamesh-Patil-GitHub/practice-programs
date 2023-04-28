/*<APPLET CODE="RainbowApplet.class" WIDTH=700 HEIGHT=700>
</APPLET>*/
import java.awt.*;
import java.applet.*;
public class RainbowApplet extends Applet{
	public void paint(Graphics g){
		int dev=0;
		for(int i=0;i<5;i++){
		g.setColor(new Color((int)(Math.random()*(50*i)),(int)(Math.random()*(40*i)),(int)(Math.random()*(35*i))));
		g.fillArc(50+dev,50+dev,400-(dev*2),400-(dev*2),0,180);
		dev+=30;
		}

	}
}