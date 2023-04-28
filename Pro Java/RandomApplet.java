/*<APPLET CODE="RandomApplet.class" WIDTH=600 HEIGHT=600>
</APPLET>*/
import java.awt.*;
import java.applet.*;
import java.util.Random;
public class RandomApplet extends Applet{
	String getFont(int i){
			String res;
			switch(i){
			case 0:res="Arial";break;
			case 1:res="Times New Roman";break;
			case 2:res="Algerian";break;
			case 3:res="Calibri";break;
			case 4:res="Futura";break;
			case 5:res="sans serif";break;
			case 6:res="Hobo";break;
			default:res="scrptina";
		}
		return res;
	}
	public void paint(Graphics g){
		int dev=00;
		Random random=new Random();
		for(int i=0;i<300;i++){
		g.setColor(new Color(random.nextInt(255),random.nextInt(255),random.nextInt(255)));
		g.setFont(new Font(getFont(random.nextInt(6)),random.nextInt(3),random.nextInt(50)));
		g.drawString(Character.toString((char)(65+random.nextInt(25))),random.nextInt(600),random.nextInt(600));
		dev+=30;
		}
	}
}