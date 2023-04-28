import java.awt.*;
import java.awt.event.*;
class MenuTest extends Frame{
	MenuBar mb=new MenuBar();
	Menu file=new Menu("File");
	Menu options=new Menu("Options");
	Menu about=new Menu("About");
	MenuItem n=new MenuItem("New",new MenuShortcut(KeyEvent.VK_N));
	MenuItem open=new MenuItem("Open");
	MenuItem save=new MenuItem("Save");
	MenuItem exit=new MenuItem("Exit");
	CheckboxMenuItem read=new CheckboxMenuItem("Read");
	CheckboxMenuItem write=new CheckboxMenuItem("Write");
	MenuItem help=new MenuItem("Help");
	MenuTest(){
		setSize(500,500);
		mb.add(file);
		mb.add(options);
		mb.add(about);

		file.add(n);
		file.add(open);
		file.addSeparator();
		file.add(exit);

		options.add(write);
		options.add(read);

		about.add(help);

		setMenuBar(mb);
	}
	public static void main(String[] args){
		MenuTest f=new MenuTest();
		f.setVisible(true);
	}
}