/*<APPLET CODE="InfoPlanetApplet.class" WIDTH=800 HEIGHT=800>
	</APPLET>*/
import java.awt.*;
import java.applet.*;
import java.util.Random;

public class InfoPlanetApplet extends Applet{
	public void paint(Graphics g){
			int row=0,col=0;
			g.setFont(new Font("Times New Roman",Font.ITALIC,20));
			for(int i=0;i<30;i++){
				col=0;
				for(int j=0;j<30;j++){
					g.drawString("Info Planet",row,col);
					col+=20;
				}
				row+=100;
			}
	}
}