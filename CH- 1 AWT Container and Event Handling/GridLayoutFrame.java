import java.awt.*;
class GridLayoutFrame extends Frame{
    GridLayoutFrame(){
        setSize(400,400);
        setLocation(100,100);
        setTitle("Grid Layout Frame");
        setLayout(new GridLayout(4,5,20,20));
        for(int i=1;i<=20;i++){
            Button b=new Button("Button"+i);
            add(b);
        }
    }
    public static void main(String[] args) {
        GridLayoutFrame f=new GridLayoutFrame();
        f.setVisible(true);
    }
}