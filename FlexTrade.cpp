#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>

#define NUM_FIELDS 5
using namespace std;
typedef std::map<std::string, int> StrIntMap;

struct SplitLine {
  string fields[NUM_FIELDS];
};

int processData(vector<struct SplitLine> data) {
  
  StrIntMap words;
  std::string s;
  vector <struct SplitLine> :: iterator i;

  // Get the occurance of the file type
  for (i = data.begin(); i != data.end(); ++i)
    {
      for (int j=0; j < NUM_FIELDS; j++)
      {
	if (j == 1)  {  ++words[i->fields[j]];  }
      }
    }

  int count = 0;
      for (StrIntMap::iterator p = words.begin(); p != words.end(); ++p)
	{
	  // std::cout << p->first << " Occured \t" << p->second << " times.\n";
	  // Get the largest count.
	  if ( p->second > count )
	    {
	      count = p->second;
	  }
	}
      //cout<<"\nCount from CW: " << count<<endl;
  return count;
}

int main(void) {
  ifstream in("input.txt");
  vector<struct SplitLine> input_data;
  vector<struct SplitLine> :: iterator i;
  
    while (in) {
    struct SplitLine line;
    for (int i=0; i<NUM_FIELDS; i++) {
      if (i==NUM_FIELDS-1)
        getline(in, line.fields[i]);
      else
        getline(in, line.fields[i], ',');
    }
    if (line.fields[0] != "")
      input_data.push_back(line);
    }
  std::ofstream out("output.txt");
  out << processData(input_data) << std::endl;
      return 0;
}
