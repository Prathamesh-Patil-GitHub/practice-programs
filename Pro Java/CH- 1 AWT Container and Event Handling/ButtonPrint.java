import java.awt.*;
import java.awt.event.*;
class ButtonPrint extends Frame{
    Button b1=new Button("Info Planet");
    Button b2=new Button("Java Programming");
    ButtonPrint(){
        setSize(500,500);
        setLocation(50,50);
        setLayout(new FlowLayout(FlowLayout.CENTER,30,30));
        add(b1);
        add(b2);
        b1.addActionListener((ActionEvent e)->{
                System.out.println("Info Planet");
            });
        b2.addActionListener((ActionEvent e)->{
                System.out.println("Java Programming");
            });
    }
    public static void main(String[] args) {
        ButtonPrint f=new ButtonPrint();
        f.setVisible(true);
    }
}