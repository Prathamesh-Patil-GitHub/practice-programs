#include<iostream>
#include "setOperations.cpp"

void inputSet(Set &s1, Set &s2){
	s1.inputSet();
	s2.inputSet();
}

void takeUnion(Set s1, Set s2){
	Set result = set_union(s1,s2);
	cout<<"\n\nUnion of the sets:\n";
	result.printSet();
}

void takeIntersection(Set s1,Set s2){
	Set result = set_intersection(s1,s2);
	cout<<"\n\nIntersection of the sets:\n";
	result.printSet();
}

void takeDiff(Set s1,Set s2){
	char choice;
	cout<<"\nPress A for A-B / Press B for B-A: ";
	cin>>choice;
	if(choice == 'A' || choice == 'a'){
		Set result = set_difference(s1,s2);
		cout<<"\n\nSet difference of the sets (A-B):\n";
		result.printSet();
	}
	else{
		Set result = set_difference(s2,s1);
		cout<<"\n\nSet difference of the sets (B-A):\n";
		result.printSet();
	}
}

void takeSymDiff(Set s1,Set s2){
	Set result = set_symmetric_difference(s1,s2);
	cout<<"\n\nSymmetric difference of the sets:\n";
	result.printSet();
}

using namespace std;
int main(){
	Set s1("Set-1");
	Set s2("Set-2");
	int choice;
	do{
		cout<<"\n#############-MENU-##################\n";
		cout<<"\n1.Input Sets\n2.Union\n3.Intersection\n4.Difference\n5.Symmetric Difference\n6.Exit\n\n";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice){
			case 1: inputSet(s1,s2); break;
			case 2: takeUnion(s1,s2); break;
			case 3: takeIntersection(s1,s2); break;
			case 4: takeDiff(s1,s2); break;
			case 5: takeSymDiff(s1,s2); break;
			case 6: cout<<"Shutting down..."; break;
			default: cout<<"Invalid Choice !";
		}
	}while(choice!=6);
	return 0;
}
