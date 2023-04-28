/*<APPLET CODE="Chessboard.class" WIDTH=800 HEIGHT=800>
	</APPLET>*/
import java.awt.*;
import java.applet.*;

public class Chessboard extends Applet{
	public void paint(Graphics g){
		int col=1;
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				if(col%2==0)
				g.drawRect(20*j,20*i,20,20);
				else
				g.fillRect(20*j,20*i,20,20);
				col++;
			}
			col++;
		}
	}

}