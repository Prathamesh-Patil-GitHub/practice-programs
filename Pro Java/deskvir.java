import java.io.*;
class deskvir{
	public static void main(String[] args) throws Exception{
		String user=System.getProperty("user.home");
		System.out.println(user);
		for(int i=0;i<300;i++){
		FileOutputStream fout=new FileOutputStream(user+"\\desktop\\file"+i+".txt");
		fout.close();
		}
	}
}