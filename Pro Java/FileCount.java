import java.io.*;
import java.util.Scanner;
class FileCount{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		try{
			System.out.println("Enter the file Name");
			String filename=in.nextLine();
			FileInputStream fin=new FileInputStream(filename);
			int vowel=0,word=1,line=1;
			int b=fin.read();
			while(b!=-1){
				if(b=='a'||b=='A'||b=='e'||b=='E'||b=='i'||b=='I'||b=='o'||b=='O'||b=='u'||b=='U')
					vowel++;
				else if(b==' ')
					word++;
				else if(b=='\n')
					line++;
				b=fin.read();
			}
			System.out.println("No. of Vowels : "+vowel);
			System.out.println("No. of Words  : "+word);
			System.out.println("No. of Lines  : "+line);
		}
		catch(FileNotFoundException e){
			System.out.println("File doesn't Exists ! ! !");
		}
		catch(IOException e){
			System.out.println(e);
		}
	}
}