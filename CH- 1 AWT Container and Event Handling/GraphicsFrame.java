import java.awt.*;
class GraphicsFrame extends Frame{
    GraphicsFrame(){
        setTitle("Drawing Graphics In Frame");
        setSize(600,500);
        setLocation(100,100);
    }
    public void paint(Graphics g){
        g.drawLine(10,40,200,40);
        g.drawRect(10,50,100,100);
        g.drawOval(10,160,100,100);
        g.drawOval(300,40,200,100);
        g.drawRoundRect(300,150,200,150,20,20);
    }
    public static void main(String[] args) {
        GraphicsFrame f=new GraphicsFrame();
        f.setVisible(true);
    }
}