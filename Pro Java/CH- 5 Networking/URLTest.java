import java.net.*;
import java.io.*;
class URLTest{
	public static void main(String[] args) throws Exception{
		URL googleUrl=new URL("http://www.google.com:80/index.html");
		BufferedReader reader=new BufferedReader(new InputStreamReader(googleUrl.openStream()));
		System.out.println("Source Code of Google Search Page:\n");
		String line=reader.readLine();
		while(line!=null){
			System.out.println(line);
			line=reader.readLine();
		}
	}
}