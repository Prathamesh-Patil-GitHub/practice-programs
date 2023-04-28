import java.net.*;
class UDPServer{
	public static void main(String [] args){
		try{
			DatagramSocket ds=new DatagramSocket(7001);	//SERVER SOCKET TO RECEIVE AND SEND
			System.out.println("UDP Server Console");
			System.out.println("Waiting For Packet...");
			while(true){
				byte[] b=new byte[100];	//BYTE ARRAY TO RECEIVE
				DatagramPacket dp=new DatagramPacket(b,b.length);	//DATAGRAM TO RECEIVE FROM CLIENT
				ds.receive(dp);	//DATAGRAM RECEIVED FROM CLIENT
				String str=new String(dp.getData());
				System.out.println(str);	//PRINTING RECEIVED DATAGRAM
				byte[] sendb=new byte[100];	//BYTE ARRAY TO ECHO RECEIVED DATA
				sendb=new String("Echo: "+str).getBytes();
				dp.setData(sendb);	//SETTING DATA IN THE PREVIOUS DATAGRAM, REUSING IT
				dp.setLength(sendb.length);	//SETTING THE LENGHT OF THE DATAGRAM
				ds.send(dp);		//SENT ECHOED DATA TO CLIENT
			}
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}