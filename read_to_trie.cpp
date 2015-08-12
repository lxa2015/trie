
#include <string>
#include <iostream> 
#include "stringcollection.h"
#include "trie.h"


int   main()
{

	string dx1file = "../../data/english/dx1_files/english.dx1";
	stringcollection*   Words= new stringcollection();

	string this_word = "hello";
	string that_word = "heaven";

	*Words << this_word;
	*Words << that_word;

	std::cout<< Words->GetCorpusCount() << std::endl;
};


