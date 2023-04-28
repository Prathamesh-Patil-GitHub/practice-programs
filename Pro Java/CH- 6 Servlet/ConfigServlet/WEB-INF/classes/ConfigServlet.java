import javax.servlet.*;
import javax.servlet.http.*;
import java.io.*;
public class ConfigServlet implements Servlet{
	public void init(ServletConfig config)throws ServletException{
		System.out.println("---Init Method Called---");
		String driver=config.getInitParameter("driver");
		String database=config.getInitParameter("database");
		String port=config.getInitParameter("port");
		String user=config.getInitParameter("user");
		String password=config.getInitParameter("password");
		//JDBC code goes here I'm just printing in console
		System.out.println("Driver: "+driver);
		System.out.println("Database: "+database);
		System.out.println("Port: "+port);
		System.out.println("User: "+user);
		System.out.println("Password: "+password);
	}

	public void service(ServletRequest request,ServletResponse response)throws ServletException,IOException{
		System.out.println("---Service Method Called---");
	}

	public void destroy(){}

	public String getServletInfo(){return null;}

	public ServletConfig getServletConfig(){return null;}
}