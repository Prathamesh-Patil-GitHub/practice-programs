import java.awt.*;
import java.awt.event.*;
class FocusEventTest extends Frame{
    Button b1=new Button("OK");
    Button b2=new Button("Cancel");
    FocusEventTest(){
        setSize(600,500);
        setLocation(30,30);
        setTitle("Focus Event Test");
        setLayout(new FlowLayout());
        add(b1);
        add(b2);
        b1.addFocusListener(new FocusHandler());
        b2.addFocusListener(new FocusHandler());
    }
    class FocusHandler implements FocusListener{
        public void focusGained(FocusEvent e){
            Button temp=(Button)e.getSource();
            temp.setForeground(Color.BLUE);
        }
        public void focusLost(FocusEvent e){
            Button temp=(Button)e.getSource();
            temp.setForeground(Color.BLACK);
        }
    }
    public static void main(String[] args) {
        FocusEventTest f=new FocusEventTest();
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent e){
            f.dispose();
            System.exit(1);
            }
        });
        f.setVisible(true);
    }
}