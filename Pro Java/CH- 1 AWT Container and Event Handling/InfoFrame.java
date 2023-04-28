import java.awt.*;
class InfoFrame extends Frame{
    InfoFrame(){
        setTitle("Drawing Graphics In Frame");
        setSize(600,500);
        setLocation(100,100);
    }
    public void paint(Graphics g){
        String[] fonts=GraphicsEnvironment.getLocalGraphicsEnvironment().getAvailableFontFamilyNames();
        for(int i=1;i<=10;i++){
			g.setFont(new Font(fonts[i],Font.BOLD,20));
			g.drawString("Prathamesh From Info Planet",10,i*30);
		}
    }
    public static void main(String[] args) {
        InfoFrame f=new InfoFrame();
        f.setVisible(true);
    }
}