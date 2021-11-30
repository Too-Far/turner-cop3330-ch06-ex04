/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Turner
 */


#include "std_lib_facilities.h" 

class Name_value_pair {
public:
	string name;
	int value;
};

vector<Name_value_pair> nv;

//To add to vector:
void add() {
    
    Name_value_pair temp;
    bool next;
    next = true; 

    while (next == true) {
		cout << "Please enter a name value pair or a 0 to terminate: ";
		cin >> temp.name >> temp.value;
		if (temp.value == 0) {
			next = false;
		}
		else {
			nv.push_back(temp);
        }  
    }
};

//Checks if all pairs are unique:
void twice() {
    int c = 0;

    for(int i = 0; i < nv.size(); i++) {
        for(int j = i+1; j<(nv.size()-i-1); j++) {
            if(nv[i].name == nv[j].name)
            {
                c++;
                break;
            }
        }
        if(c!=0)
        {
            cout<<"ERROR. This is not a unique pair.";
            break;
        }
    }    
};

//Displays all entries:
void display() {
    for(int i = 0; i < nv.size(); i++)
    {
        cout<<"Name: "<<nv[i].name<<"\nScore: "<<nv[i].value;
    }
};

int main() {
    add();
    twice();
    display();
    return 0;
}
