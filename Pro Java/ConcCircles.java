/*<APPLET CODE="ConcCircles.class WIDTH=400 HEIGHT=400>
</APPLET>*/
import java.applet.*;
import java.awt.*;
public class ConcCircles extends Applet{
	public void paint(Graphics g){
		int dev=0;
		for(int i=0;i<5;i++){
			g.drawOval(50+dev,50+dev,200-(2*dev),200-(2*dev));
			dev=dev+20;
		}
	}
}