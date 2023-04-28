import java.util.*;
import java.io.*;
class FastCopy{
	public static void main(String[] args)throws IOException,FileNotFoundException{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the Source file name");
		String src_file=in.nextLine();
		BufferedInputStream fin=new BufferedInputStream(new FileInputStream(src_file));
		System.out.println("Enter the Destination file name");
		String dest_file=in.nextLine();
		BufferedOutputStream fout=new BufferedOutputStream(new FileOutputStream(dest_file));
		int b=fin.read();
		long st_time=new Date().getTime();
		while(b!=-1){
			fout.write((byte)b);
			b=fin.read();
		}
		fin.close();
		fout.close();
		long end_time=new Date().getTime();
		System.out.println("FILE COPPIED SUCCESSFULLY in "+(end_time-st_time)+"ms");
	}

}