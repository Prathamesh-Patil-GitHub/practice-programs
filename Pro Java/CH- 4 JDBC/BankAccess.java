import java.sql.*;
class BankAccess{
	public static void main(String[] args){
		try{
			Connection conn=DriverManager.getConnection("jdbc:ucanaccess://F:\\Programs\\PRO JAVA(Advanced)\\CH- 4 JDBC\\bankdb.accdb");
			Statement state=conn.createStatement();
			ResultSet rs=state.executeQuery("select * from Accounts");
			System.out.println("ACC_NO\tACC_NAME\tACC_BALANCE");
			while(rs.next())
				System.out.println(rs.getString(1)+"\t"+rs.getString(2)+"\t"+rs.getString(3));
		}
		catch(Exception e){System.out.println(e);}
	}
}