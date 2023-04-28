import javax.servlet.*;
import java.util.Enumeration;
import java.io.*;

public class LoginClass implements Servlet{
	public void init(ServletConfig config)throws ServletException{}

	public void service(ServletRequest request,ServletResponse response)throws ServletException,IOException{
		String username=request.getParameter("username");
		String password=request.getParameter("password");
		PrintWriter out=response.getWriter();
		response.setContentType("text/html");
		out.println("<html>");
		out.println("<body>");
		if(password.equals("prathamesh"))
			out.println("<h1>Login Successful</h1>");
		else
			out.println("<h1>Login Failed ! Invalid Password</h1>");
			out.println("</body>");
			out.println("</html>");
		out.close();
	}

	public void destroy(){}

	public String getServletInfo(){return null;}

	public ServletConfig getServletConfig(){return null;}
}