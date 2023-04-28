class PointToString{
	int x,y;
	PointToString(int a,int b){
		x=a;
		y=b;
	}
	public String toString(){
		String str="[x="+x+",y="+y+"]";
		return str;
	}
	public static void main(String[] args){
		PointToString obj=new PointToString(10,20);
		System.out.println(obj);
	}
}