import java.awt.*;
class FillShapes extends Frame{
    FillShapes(){
        setTitle("Drawing Graphics In Frame");
        setSize(600,500);
        setLocation(100,100);
    }
    public void paint(Graphics g){
        g.setColor(Color.CYAN);
		g.drawLine(10,40,200,40);
		g.fillRect(10,50,100,100);
		g.setColor(Color.RED);
		g.fillOval(10,160,100,100);
		g.setColor(Color.LIGHT_GRAY);
		g.fillOval(300,40,200,100);
		g.setColor(Color.GREEN);
        g.fillRoundRect(300,150,200,150,20,20);
    }
    public static void main(String[] args) {
        FillShapes f=new FillShapes();
        f.setVisible(true);
    }
}