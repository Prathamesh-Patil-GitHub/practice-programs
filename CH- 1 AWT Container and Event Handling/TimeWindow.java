import java.awt.*;
import java.awt.event.*;
import java.util.Date;
class TimeWindow extends Frame{
    Button b=new Button("Time");
    TimeWindow(){
        setSize(500,500);
        setLocation(50,50);
        setLayout(new FlowLayout(FlowLayout.CENTER,30,30));
        setTitle("Date & Time: ");
        add(b);
        b.addActionListener((ActionEvent e)->{
                setTitle("Date & Time: "+new Date().toString());
            });
    }
    public static void main(String[] args) {
        TimeWindow f=new TimeWindow();
        f.setVisible(true);
    }
}