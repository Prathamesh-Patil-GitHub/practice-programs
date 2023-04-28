import javax.servlet.*;
import javax.servlet.http.*;
import java.io.IOException;
public class ServletClass implements Servlet{
	public void init(ServletConfig config)throws ServletException{
		System.out.println("Inside Servlet init Method");
	}
	public void service(ServletRequest request,ServletResponse response)throws ServletException,IOException{
		System.out.println("Inside Servlet service Method");
	}
	public void destroy(){
		System.out.println("Inside Servlet destroy Method");
	}
	public ServletConfig getServletConfig(){
		return null;
	}
	public String getServletInfo(){
		return null;
	}
}