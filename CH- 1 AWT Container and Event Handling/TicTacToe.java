import java.awt.*;
import java.awt.event.*;
import java.util.Vector;
class ResultFrame extends Frame{			//Winning Frame used for Declaring Result
	Button b=new Button("");
	ResultFrame(String result){
		setSize(400,400);
		setLocation(200,200);
		setTitle("Game Result");
		setResizable(false);
		add(b);
		b.setLabel("Result: "+result+ "!!! Click Here to Exit");
		b.addActionListener((ActionEvent ae)->{System.exit(1);});
		}
}
class TicTacToe extends Frame implements ActionListener{		//Actual Frame-Gaming Frame
	Button[] b=new Button[9];
	boolean flag=false;											//Declarations
	int clickCount=0;
	Vector<Integer> xScore=new Vector<Integer>();
	Vector<Integer> oScore=new Vector<Integer>();
	Vector<Integer>[] w=new Vector[8];
	Button result=new Button();
	boolean resume=true;

	TicTacToe(){
		setFont(new Font("Arial",Font.BOLD,50));		//Initializations and Frame Settings
		setSize(600,500);
		setTitle("Tic Tac Toe");
		setLocation(50,50);
		setLayout(new GridLayout(3,3));
		for(int i=0;i<=7;i++)
			w[i]=new Vector<Integer>();
		for(int i=0;i<9;i++){
			b[i]=new Button(" ");
			add(b[i]);
			b[i].setBackground(Color.PINK);
			b[i].setForeground(Color.WHITE);
			b[i].addActionListener(this);
			fillVector();
		}
	}
	public void actionPerformed(ActionEvent e){			//Actual Button Action Handling(Event Handling)
		Button temp=(Button)e.getSource();
		if(temp.getLabel().equals(" ") && clickCount<=9 && resume){
			clickCount++;
			if(flag==false){
				temp.setLabel("O");
				flag=true;
			}
			else{
				temp.setLabel("X");
				flag=false;
			}

			if(temp.getLabel().equals("X")){		//Checking Results for X Player
				for(int i=0;i<9;i++){
					if(b[i]==temp)
						xScore.add(i);
					if(isWinningPosition(xScore)){
						System.out.println("X WON");
						ResultFrame rf=new ResultFrame("X Player is the WINNER");
						rf.setVisible(true);
						resume=false;
					}
				}
			}
			else{
				for(int i=0;i<9;i++){				//Checking Results for O Player
					if(b[i]==temp)
						oScore.add(i);
					if(isWinningPosition(oScore)){
						System.out.println("O WON");
						ResultFrame rf=new ResultFrame("O Player is the WINNER");
						rf.setVisible(true);
						resume=false;
					}
				}
			}
		}
		if(clickCount==9){							//Game Draw Result
			System.out.println("Game Draw");
			ResultFrame rf=new ResultFrame("Game Draw");
			rf.setVisible(true);
		}
	}
	void fillVector(){								//Filling Winning Possibilities In WinningVector
		w[0].add(0);
		w[0].add(1);
		w[0].add(2);
		w[1].add(3);
		w[1].add(4);
		w[1].add(5);
		w[2].add(6);
		w[2].add(7);
		w[2].add(8);
		w[3].add(0);
		w[3].add(3);
		w[3].add(6);
		w[4].add(1);
		w[4].add(4);
		w[4].add(7);
		w[5].add(2);
		w[5].add(5);
		w[5].add(8);
		w[6].add(0);
		w[6].add(4);
		w[6].add(8);
		w[7].add(2);
		w[7].add(4);
		w[7].add(6);
	}
	boolean isWinningPosition(Vector<Integer> v){		//Function to Check the winning result
		for(int i=0;i<=7;i++){
			if(v.containsAll(w[i]))
				return true;
		}
		return false;
	}
	public static void main(String[] args){				//Main Method for Loading The Application
		TicTacToe f=new TicTacToe();
		f.setVisible(true);
	}
}