#include <iostream>
#include <vector>
#include <map>
#include <fstream>

std::vector<std::map<char, int> > getStateTable();

int main() {
	getStateTable();
	
}

std::vector<std::map<char, int> > getStateTable() {
	std::ifstream fin("StateTable.txt");
	
	std::vector<std::map<char, int> > stateTable;
	
	if (fin.is_open()) {
		
		int stateTableSize = 0; fin >> stateTableSize;
		
		std::vector<std::map<char, int> > stateTable(stateTableSize);
		
		int fState = 0, nState = 0;
		char character = 0;

		while (fin >> fState && fin >> character && fin >> nState) {
			
			std::cout << fState << " " << nState << " " << character << std::endl;
		}
	}
	else {
		std::cout << "Sosi bibu" << std::endl;
	}
	
	
	return stateTable;
}


