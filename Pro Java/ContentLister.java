import java.io.*;
class ContentLister{
	public static void main(String[] args)throws Exception{
		File file=new File("C:\\PRO JAVA");
		int f_count=0,d_count=0;
		String[] contents=file.list();
		for(String s:contents){
			File f=new File("C:\\PRO JAVA\\"+s);
			if(f.isFile()){
			System.out.println(s+"\t\t\t<FILE>");
			f_count++;
			}
			else{
			System.out.println(s+"\t\t\t<DIR>");
			d_count++;
			}
		}
		System.out.println("NO. OF FILES       >> "+f_count);
		System.out.println("NO. OF DIRECTORIES >> "+d_count);
	}
}