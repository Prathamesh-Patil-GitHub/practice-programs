import java.util.*;
class InfixToPostfix{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the Infix Expression:");
		String infix="("+in.nextLine()+")";
		Stack<Character> temp = new Stack<Character>();
		String postfix="";
		System.out.println("================================================================");
		System.out.println("Element\tStack\t\t\tPostfix");
		System.out.println("================================================================");
		int i=0;
		while(i<infix.length()){
			char ch=infix.charAt(i);
			if(Character.isAlphabetic(ch))
				postfix=postfix+ch;
			else if(ch=='(')
				temp.push(ch);
			else if(ch==')'){
				while(temp.peek()!='(')
					postfix=postfix+temp.pop();
				temp.pop();
			}
			else{
				while((value(temp.peek()) >= value(ch)) && (temp.peek()!='('))
					postfix=postfix+temp.pop();
				temp.push(ch);
			}
			System.out.println(ch+"\t"+temp+"\t\t\t"+postfix);
			i++;
		}
		System.out.println("\n\nConverted Postfix Expression is:"+postfix);
	}
	static int value(char ch){
		if(ch=='+'||ch=='-')
			return 1;
		else if(ch=='*'||ch=='/'||ch=='%')
			return 2;
		else if(ch=='^')
			return 3;
		else
			return 0;
	}
}