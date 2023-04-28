import java.io.*;
import java.net.*;
import java.util.Scanner;
class EchoClient{
	public static void main(String[] args){
		try{
			Socket s=new Socket("localhost",8189);
			System.out.println("Connected");
			BufferedReader sin=new BufferedReader(new InputStreamReader(s.getInputStream()));
			PrintWriter sout=new PrintWriter(s.getOutputStream(),true);
			Scanner in=new Scanner(System.in);
			boolean done=false;
			System.out.println(sin.readLine());
			while(!done){
				String line=in.nextLine();
				if(line.equals("BYE"))
					done=true;
				sout.println(line);
				System.out.println(sin.readLine());
			}

			s.close();
		}
		catch(Exception e){
			System.out.println(e);
		}

	}
}