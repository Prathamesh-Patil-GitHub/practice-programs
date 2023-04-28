import java.awt.Frame;
class Frame10{
	public static void main(String[] args){
		for(int i=1;i<=10;i++){
			Frame f=new Frame();
			f.setSize(400,400);
			f.setLocation(i*20,i*20);
			f.setTitle("Frame"+i);
			f.setVisible(true);
		}
	}
}