import java.io.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.tree.*;
import javax.swing.event.*;

class TreeTest extends JFrame{
	JTree tree;

	TreeTest(){

		setSize(600,600);
		setLocation(100,100);
		setTitle("Explore: ");

		File rootFile=new File("F:\\");

		DefaultMutableTreeNode root=draw(rootFile);
		tree=new JTree(root);

		JScrollPane pane=new JScrollPane(tree);
		add(pane);
		tree.addTreeSelectionListener((TreeSelectionEvent e)->{
			DefaultMutableTreeNode n=(DefaultMutableTreeNode)tree.getLastSelectedPathComponent();
			setTitle(n.toString());
		});
	}
	public DefaultMutableTreeNode draw(File file){
		DefaultMutableTreeNode root=new DefaultMutableTreeNode(file.getName());
		try{
			String[] list=file.list();
			for(String str:list){
				File tempFile=new File(file.getCanonicalPath()+"\\"+str);
				if(tempFile.isDirectory()){
					DefaultMutableTreeNode n=draw(tempFile);
					root.add(n);
				}
				else{
					DefaultMutableTreeNode n=new DefaultMutableTreeNode(str);
					root.add(n);
				}
			}
		}catch(Exception e){}
		return root;
	}
	public static void main(String[] args){
		TreeTest f=new TreeTest();
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setVisible(true);
	}
}