import java.net.*;
import java.io.*;
class EchoServer{
	public static void main(String[] args)throws IOException{
		//Create Server Socket which listenes on Port no. 8189
		ServerSocket ss=new ServerSocket(8189);
		//Wait Until a Client Socket Connects
		System.out.println("Waiting for the client to connect...");
		Socket client=ss.accept();
		System.out.println("Client is connected from IP: "+client.getLocalAddress().getHostAddress());
		BufferedReader in=new BufferedReader(new InputStreamReader(client.getInputStream()));
		PrintWriter out=new PrintWriter(client.getOutputStream(),true);
		out.println("Enter 'BYE' to terminate the session...");
		boolean done=false;
		while(!done){
			String line=in.readLine();
			if(line==null)
				done=true;
			else{
				if(line.trim().equals("BYE"))
					done=true;
				else{
					System.out.println(line);
					out.println("Echo: "+line);
				}
			}
		}
		in.close();
		out.close();
		client.close();
		ss.close();
	}
}