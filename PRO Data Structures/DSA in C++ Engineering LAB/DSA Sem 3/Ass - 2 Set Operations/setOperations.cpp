#include<iostream>
using namespace std;

class Set{
	private:
		int* arr;
		string name;
		int n;
		int eleCount;
	public:
		Set(string name){
			this->name = name;
			eleCount = 0;
		}
		Set(string name, int n){
			this->name = name;
			this->n = n;
			arr = new int[n];
			eleCount = 0;
		}
		void inputSet(){
			cout<<"Enter the number elements for "+name+" :";
			cin>>n;
			arr = new int[n];
			cout<<"Enter the elements for "+name+" :";
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			eleCount = n;
		}
		void printSet(){
			for(int i=0;i<eleCount;i++){
				cout<<arr[i]<<"\t";
			}
		}
		void append(int num){
			arr[eleCount] = num;
			eleCount++;
		}
		bool isPresent(int n){
			for(int i=0;i<eleCount;i++){
				if(n == arr[i]){
					return true;
				}
			}
			return false;
		}
		int getSize(){
			return eleCount;
		}
		int getElement(int i){
			return arr[i];
		}
};

int min(int a, int b){
	if(a<=b){
		return a;
	}
	return b;
}

Set set_union(Set s1,Set s2){
	int newSize = s1.getSize() + s2.getSize();
	Set result("Result",newSize);
	for(int i = 0;i<s1.getSize();i++){
		if(! result.isPresent(s1.getElement(i))){
			result.append(s1.getElement(i));
		}
	}
	for(int i = 0;i<s2.getSize();i++){
		if(! result.isPresent(s2.getElement(i))){
			result.append(s2.getElement(i));
		}
	}
	return result;
}

Set set_intersection(Set s1, Set s2){
	Set result("Result", min(s1.getSize(), s2.getSize()));
	for(int i = 0;i<s1.getSize();i++){
		if (s2.isPresent(s1.getElement(i))){
			result.append(s1.getElement(i));
		}
	}
	return result;	
}

Set set_difference(Set s1, Set s2){
	Set result("Result", s1.getSize());
	for(int i = 0;i<s1.getSize();i++){
		if (! s2.isPresent(s1.getElement(i))){
			result.append(s1.getElement(i));
		}
	}
	return result;	
}

Set set_symmetric_difference(Set s1, Set s2){
	Set unionSet = set_union(s1,s2);
	Set intersectionSet = set_intersection(s1,s2);
	Set result("Result", unionSet.getSize()-intersectionSet.getSize());
	for(int i = 0;i<unionSet.getSize();i++){
		if (! intersectionSet.isPresent(unionSet.getElement(i))){
			result.append(unionSet.getElement(i));
		}
	}
	return result;
}

//int main(){
//	Set s1("A");
//	s1.inputSet();
//	Set s2("B");
//	s2.inputSet();
//	
//	Set s3 = set_union(s1,s2);
//	cout<<"\n\nUnion of the sets:\n";
//	s3.printSet();
//	
//	Set s4 = set_intersection(s1,s2);
//	cout<<"\n\nIntersection of the sets:\n";
//	s4.printSet();
//	
//	Set s5 = set_difference(s1,s2);
//	cout<<"\n\nSet difference of the sets (A-B):\n";
//	s5.printSet();
//	
//	Set s6 = set_difference(s2,s1);
//	cout<<"\n\nSet difference of the sets (B-A):\n";
//	s6.printSet();
//	
//	Set s7 = set_symmetric_difference(s1,s2);
//	cout<<"\n\nSymmetric difference of the sets:\n";
//	s7.printSet();
//	
//	
//	return 0;
//}


