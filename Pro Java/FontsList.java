/*<APPLET CODE="FontList.class" WIDTH=300 HEIGHT=700>
	</APPLET>
*/
import java.awt.*;
import java.applet.*;
public class FontsList extends Applet{
	public void paint(Graphics g){
		try{
			String[] fonts=GraphicsEnvironment.getLocalGraphicsEnvironment().getAvailableFontFamilyNames();
			int i=0;
			while(true){
				g.setFont(new Font(fonts[i],Font.ITALIC,20));
				g.drawString("Hello World",50,i*20);
				i++;
			}
		}
		catch(Exception e){}
	}
}