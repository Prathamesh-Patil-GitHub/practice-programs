import java.sql.*;
class EmpAccess{
	public static void main(String[] args){
		try{
			Class.forName("net.ucanaccess.jdbc.UcanaccessDriver");
			System.out.println("---Database Drivers Installed---");
			Connection conn=DriverManager.getConnection("jdbc:ucanaccess://F:\\Programs\\PRO JAVA(Advanced)\\CH- 4 JDBC\\empdb.accdb;COLUMNORDER=DISPLAY");
			System.out.println("---Connection Established with Database---");
			Statement state=conn.createStatement();
			ResultSet rs=state.executeQuery("Select * from EMP");
			System.out.println("\n---Printing Data---\n");
			System.out.println("EMP-ID\t\tEMP-NAME\tEMP-SALARY\tEMP-DEPARTMENT");
			System.out.println("---------------------------------------------------------------------");
			while(rs.next()){
				System.out.println(rs.getString(1)+"\t\t"+rs.getString(2)+"\t\t"+rs.getString(3)+"\t\t"+rs.getString(4));
			}
			state.close();
			conn.close();
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}