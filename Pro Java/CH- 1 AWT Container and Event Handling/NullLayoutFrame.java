import java.awt.*;
class NullLayoutFrame extends Frame{
    NullLayoutFrame(){
        setSize(400,400);
        setLocation(100,100);
        setLayout(null);
        setTitle("Null Layout Frame");
        Button b1=new Button("OK");
        b1.setBounds(50,100,50,50);
        add(b1);
        Button b2=new Button("CANCLE");
        b2.setBounds(120,100,80,50);
        add(b2);
    }
    public static void main(String[] args) {
        NullLayoutFrame f=new NullLayoutFrame();
        f.setVisible(true);
    }
}