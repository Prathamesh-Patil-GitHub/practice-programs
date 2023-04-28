import javax.servlet.*;
import javax.servlet.http.*;
import java.io.*;
public class HttpServletTest extends HttpServlet{
	public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException{
		String c=req.getParameter("c");
		String cpp=req.getParameter("cpp");
		System.out.println("C= "+c);
		System.out.println("CPP= "+cpp);
		PrintWriter out=res.getWriter();
		out.println("<html><body>Thank You !</body></html>");
	}
}