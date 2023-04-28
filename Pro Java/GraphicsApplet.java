/*<APPLET CODE="GraphicsApplet.class" WIDTH=800 HEIGHT=800>
	</APPLET>*/
import java.awt.*;
import java.applet.*;
import java.util.Random;

public class GraphicsApplet extends Applet{
	public void paint(Graphics g){
		int dev=0;
		Random rand=new Random();
		for(int i=1;i<=6;i++){
			switch(i){
				case 1:g.setColor(Color.red);break;
				case 2:g.setColor(Color.blue);break;
				case 3:g.setColor(Color.green);break;
				case 4:g.setColor(Color.cyan);break;
				case 5:g.setColor(Color.yellow);break;
				case 6:g.setColor(Color.magenta);break;
			}
			g.fillRect(50+dev,50+dev,(300-dev*2),(300-dev*2));
			dev+=20;
		}
	}

}