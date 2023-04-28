import java.util.Scanner;
class CountVowel{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		String[] s=new String[5];
		System.out.println("Enter "+ s.length+" Strings");
		for(int i=0;i<s.length;i++)
			s[i]=in.nextLine();
		short totalVowel=0;
		for(String t:s){
			short vowel=0;
			for(int i=0;i<t.length();i++){
				if(t.charAt(i)=='a'||t.charAt(i)=='A'||t.charAt(i)=='e'||t.charAt(i)=='E'||t.charAt(i)=='i'||t.charAt(i)=='I'||t.charAt(i)=='o'||t.charAt(i)=='O'||t.charAt(i)=='u'||t.charAt(i)=='U')
					vowel++;
			}
			System.out.println("Vowels in \" "+ t +"\" is "+vowel);
				totalVowel+=vowel;
		}
		System.out.println("===========================================================================================");
		System.out.println("Total Vowels = "+totalVowel);

	}
}