class Even_Thread extends Thread
{
	public void run(){
			for(int i=0;i<=20;i++)
				if(i%2==0)
					System.out.println("Even:"+i);
	}
}
class Odd_Thread extends Thread
{
	public void run(){
			for(int i=0;i<=20;i++)
				if(i%2!=0)
					System.out.println("Odd:"+i);
	}
}
class TestThread{
	public static void main(String[] args){
		Even_Thread a=new Even_Thread();
		Odd_Thread b=new Odd_Thread();
		a.start();
		b.start();
	}
}