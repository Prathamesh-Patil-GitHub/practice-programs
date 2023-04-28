import java.util.*;
class StringVector{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		Vector<String> v=new Vector<String>();
		int ch;
		String str;
		do{
		System.out.println("Vector Size is: "+v.size());
		System.out.println("=================================");
		System.out.println("Menu\n\n1.Add String\n2.Delete String\n3.Search a string\n4.Display All Strings\n5.Exit");
		System.out.print("Enter your choice: ");
		ch=in.nextInt();
		in.nextLine();
		switch(ch){
		case 1: System.out.print("Enter the String: ");
				str=in.nextLine();
				v.add(str);
				System.out.println(str+" is Added !!!");
				break;
		case 2: if(v.isEmpty()){
					System.out.println("The Collection is EMPTY !!!");
					break;
				}
				System.out.print("Enter the string to delete: ");
				str=in.nextLine();
				boolean b=v.remove(str);
				if(b)
					System.out.println(str+" is Removed !!!");
				else
					System.out.println(str+" is not Found !!!");
				break;
		case 3: if(v.isEmpty()){
					System.out.println("The Collection is EMPTY !!!");
					break;
				}
				System.out.print("Enter the string to Search: ");
				str=in.nextLine();
				int index=v.indexOf(str);
				if(index>=0)
					System.out.println(str+" is found at no "+index+" Index !!!");
				else
					System.out.println(str+" is not found in the Collection");
				break;
		case 4: if(v.isEmpty()){
					System.out.println("The Collection is EMPTY !!!");
					break;
				}
				System.out.println("The String Collection is:");
				for(int i=0;i<v.size();i++)
					System.out.println(v.get(i));
				break;
		case 5: System.out.println("Program Terminated !!!");
				break;
		default: System.out.println("Invalid Input !!!");
		}
		in.nextLine();
		}while(ch!=5);
	}

}