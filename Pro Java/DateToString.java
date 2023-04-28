class DateToString{
	int day,month,year;
	DateToString(int a,int b,int c){
	day=a;
	month=b;
	year=c;
	}
	public String toString(){
		String str="",rStr;
		switch (month){
			case 1: str="Jan"; break;
			case 2: str="Feb"; break;
			case 3: str="Mar"; break;
			case 4: str="Apr"; break;
			case 5: str="May"; break;
			case 6: str="Jun"; break;
			case 7: str="Jul"; break;
			case 8: str="Aug"; break;
			case 9: str="Sep"; break;
			case 10: str="Oct"; break;
			case 11: str="Nov"; break;
			case 12: str="Dec"; break;
		}
		rStr=day+"-"+str+"-"+year;
		return rStr;
	}
	public static void main(String[] args){
		DateToString obj=new DateToString(19,5,2021);
		System.out.println(obj);
	}
}