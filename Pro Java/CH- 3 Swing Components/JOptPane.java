import javax.swing.*;
class JOptPane{
	public static void main(String[] args){
		int x=JOptionPane.showConfirmDialog(null,"Bro, this is just a trial","Trial Dialog",
		JOptionPane.YES_NO_OPTION,JOptionPane.INFORMATION_MESSAGE);
		if(x==JOptionPane.YES_OPTION)
			JOptionPane.showMessageDialog(null,"You Just Selected YES","ACTION Dialog",
		JOptionPane.INFORMATION_MESSAGE);
		else if(x==JOptionPane.NO_OPTION)
			JOptionPane.showMessageDialog(null,"You Just Selected NO","ACTION Dialog",
		JOptionPane.INFORMATION_MESSAGE);
		else
			JOptionPane.showMessageDialog(null,"You Just closed the Dialog","ACTION Dialog",
		JOptionPane.INFORMATION_MESSAGE);
	}
}