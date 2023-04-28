class TimeString{
	int hours,minutes,seconds;
	TimeString(int a,int b,int c){
		hours=a;
		minutes=b;
		seconds=c;
	}
	public String toString(){
		String str=hours+":"+minutes+":"+seconds;
		return str;
	}
	public static void main(String[] args){
		TimeString t=new TimeString(8,30,25);
		System.out.println(t);
	}
}