import java.net.*;
import java.util.Scanner;
class UDPClient{
	public static void main(String[] args){
		try{
			DatagramSocket ds=new DatagramSocket();
			System.out.println("UDP Client Console...");
			boolean done=false;
			Scanner in=new Scanner(System.in);
			while(!done){
				System.out.println("Enter the string to send: ");
				String str=in.nextLine();
				if(str.equals("BYE"))
					done=true;
				byte[] b=new byte[100];		//BYTE ARRAY FOR SENDING
				b=str.getBytes();
				DatagramPacket dp=new DatagramPacket(b,b.length,InetAddress.getLocalHost(),7001);
					//DATAGRAM PACKET FOR SENDING
				ds.send(dp);		//DATAGRAM SENT
				System.out.println(str+" sent to the server\n\n\n");
				byte[] rb=new byte[100];	//BYTE ARRAY FOR ECHO RECEIVE
				DatagramPacket receive=new DatagramPacket(rb,rb.length);	//DATAGRAM PACKET FOR ECHO
				ds.receive(receive);		//DATAGRAM RECEIVED
				String getStr=new String(receive.getData());
				System.out.println(getStr);	//PRINTING ECHO
			}
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}