import java.net.*;
class InetAddressTest{
	public static void main(String[] args){
		try{
			InetAddress local=InetAddress.getLocalHost();
			System.out.println("Host Name: "+local.getHostName());
			System.out.println("Host Addr: "+local.getHostAddress());
		}
		catch(UnknownHostException e){
			System.out.println("An error occured, Please check your internet connection or host-name");
		}
	}
}