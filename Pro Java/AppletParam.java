import java.applet.Applet;
import java.awt.*;
public class AppletParam extends Applet{
	public void paint(Graphics g){
		String acc=getParameter("account_no");
		double bal=Double.parseDouble(getParameter("balance"));
		if(bal<1000)
		g.drawString("Low Balance",50,50);
		else
		g.drawString("Adequate Balance",50,50);
	}
}