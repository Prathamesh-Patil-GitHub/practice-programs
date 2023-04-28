import java.util.Scanner;
class AuthenticationFailureException extends Exception{
	AuthenticationFailureException(String msg){
		super(msg);
	}
}
class InvalidPassExcep{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the Password");
		try{
			String pass=in.nextLine();
			if(!(pass.equals("mypassword")))
				throw new AuthenticationFailureException("Invalid Password Credentials !");
			System.out.println("Logged In !!!");
		}
		catch(AuthenticationFailureException e){
			System.out.println(e);
		}
	}
}