import java.sql.*;
class EmpMySql{
	public static void main(String[] args)throws Exception{
		Class.forName("com.mysql.cj.jdbc.Driver");
		System.out.println("---Database Drivers Installed---");
		Connection conn=DriverManager.getConnection("jdbc:mysql:// localhost:3306/mydatabase","Prathamesh","prathamesh@mysql");
		System.out.println("---Connection Established With Database");
		Statement state=conn.createStatement();
		ResultSet rs=state.executeQuery("Select * from Employee");
		System.out.println("EMP_ID\t\tEMP_NAME\t\tEMP_SALARY\t\tEMP_DEPT");
		System.out.println("--------------------------------------------------------------------------------------");
		while(rs.next())
			System.out.println(rs.getInt(1)+"\t\t"+rs.getString(2)+"\t\t"+rs.getDouble(3)+"\t\t"+
			rs.getString(4));
		rs.close();
		state.close();
		conn.close();
	}
}