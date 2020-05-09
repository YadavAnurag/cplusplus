#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
#include <vector>
#include <chrono>
#include <fstream>
#include <map>
#include <boost/algorithm/string.hpp> // boost::split


using namespace std;

map<string, int> CountWords(vector<string> const& words){
  map<string, int> wordCount{};
  for(auto const& word:words){
    ++wordCount[word];
  }

  return wordCount;
}

vector<string> ReadWordsFromFile(string const& filename){
  ifstream inputFile{filename};
  string line{};
  vector<string> words;

  while(getline(cin, line)){
    // parse current line split into words
    vector<string> wordsInLine;
    boost::split(wordsInLine, line, [](char ch){if(! isalnum(ch); )}, boost::algorithm::token_compress_on);

    // add current parsing result to the array
    words.insert(end(words), begin(wordsInLine), end(wordsInLine));
  }
  // erase spurious empty string returned by boost::split
  // using erase-remove idiom
  words.erase(remove(begin(words), end(words), ""), end(words));

  return words;
}

int main(){

  const vector<string> words = ReadWordsFromFile("../intro.txt");

  auto start = chrono::system_clock::now();
    map<string, int> wordCount = CountWords(words);
  auto end = chrono::system_clock::now();
  auto elapsed_ms = chrono::duration_cast<chrono::milliseconds>(end-start);

  cout << "Word couting took " << elapsed_ms.cout() << "ms \n";
  cout << "processed " << wordCount.size() << "words \n" ;


#ifdef PRINT_WORD_COUNTS
  cout << "\n\n Word counts: \n";
  for(auto const& [word, count]:wordCount){
    count << " " << word << " : " << count;
  }
#endif

  return 0;
}