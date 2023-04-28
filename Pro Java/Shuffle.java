import java.io.*;
class Shuffle{
	public static void main(String[] args)throws IOException, FileNotFoundException{
		FileInputStream fin1=new FileInputStream("Truth.txt");
		FileInputStream fin2=new FileInputStream("Dare.txt");
		FileOutputStream fout=new FileOutputStream("Shuffled.txt");
		int b1=fin1.read();
		int b2=fin2.read();
		int temp;
		while(b1!=-1 || b2!=-1){
			temp=(int)(100*Math.random());

			if(temp%2==0 && b1!=-1){
				while((char)b1 != '\n' && b1!=-1){
					fout.write((byte)b1);
					b1=fin1.read();
				}
				b1=fin1.read();
				System.out.println("Truth added");
			}
			if(temp%2!=0 && b2!=-1){
				while((char)b2 != '\n' && b2!=-1){
					fout.write((byte)b2);
					b2=fin2.read();
				}
				b2=fin2.read();
				System.out.println("Dare added");
			}
			System.out.println("Copying");
		}
		System.out.println("DONE");
		fin1.close();
		fin2.close();
		fout.close();
	}

}