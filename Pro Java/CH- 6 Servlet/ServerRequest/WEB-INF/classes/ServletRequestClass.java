import javax.servlet.*;
import java.util.Enumeration;
import java.io.IOException;

public class ServletRequestClass implements Servlet{
	public void init(ServletConfig config)throws ServletException{}

	public void service(ServletRequest request,ServletResponse response)throws ServletException,IOException{
		System.out.println("---Session Started---");
		System.out.println("Server        : "+request.getServerName());
		System.out.println("Port          : "+request.getServerPort());
		System.out.println("Content Type  : "+request.getContentType());
		System.out.println("Content Length: "+request.getContentLength());
		Enumeration<String> paramNames=request.getParameterNames();
		while(paramNames.hasMoreElements()){
			String pname=paramNames.nextElement();
			String value=request.getParameter(pname);
			System.out.println(pname+" : "+value);
		}
		System.out.println("---Session Ended---");
	}

	public void destroy(){}

	public String getServletInfo(){return null;}

	public ServletConfig getServletConfig(){return null;}
}