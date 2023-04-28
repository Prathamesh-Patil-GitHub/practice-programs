
class ShutdownHookTest extends Thread{
	public void run(){
		System.out.println("Shutdown Hook has been run... And tasks has been performed");
	}
	public static void main(String[] args){
		Runtime r=Runtime.getRuntime();
		r.addShutdownHook(new ShutdownHookTest());
		System.out.println("Waitin in main method for 5 secs...");
		try{Thread.sleep(5000);}catch(Exception e){}
	}
}
