import java.awt.*;
import java.awt.event.*;
class LabelTest extends Frame{
    Panel center=new Panel(new FlowLayout(FlowLayout.CENTER,10,50));
    Label label=new Label("Prathamesh Patil");
    LabelTest(){
        setSize(600,600);
        setLocation(100,100);
        setTitle("Label Test");
        label.setFont(new Font("Arial",Font.BOLD,30));
        label.setBackground(Color.PINK);
        center.setBackground(Color.LIGHT_GRAY);
        String s[]={"Left","Right","Center"};
        for(int i=0;i<s.length;i++){
            Button b=new Button(s[i]);
            b.addActionListener((ActionEvent e)->{
                String source=e.getActionCommand();
                if(source.equals("Left"))
                    label.setAlignment(Label.LEFT);
                else if(source.equals("Right"))
                    label.setAlignment(Label.RIGHT);
                else
                    label.setAlignment(Label.CENTER);
            });
            center.add(b);
        }
        add(center);
        add(label,"North");
    }
    public static void main(String[] args) {
        LabelTest f=new LabelTest();

        f.setVisible(true);
    }
}