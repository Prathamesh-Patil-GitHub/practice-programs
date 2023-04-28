import java.net.*;
import java.io.*;
class SocketTest{
	public static void main(String[] args){
		try{
			Socket socket=new Socket("time-A.timefreq.bldrdoc.gov",13);
			System.out.println("Connection Established =!=");
			System.out.println(socket.getInetAddress());
			BufferedReader reader=new BufferedReader(new InputStreamReader(socket.getInputStream()));
			boolean more=true;
			String line;
			while(more){
				line=reader.readLine();
				if(line==null)
					more=false;
				else
					System.out.println(line);
			}
		}
		catch(UnknownHostException e){
			System.out.println("Erro occured while establishing connection !!!");
		}
		catch(IOException e){
			System.out.println("Error occured while reading data from stream !!!");
		}
	}
}