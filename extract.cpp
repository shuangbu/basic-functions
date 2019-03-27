// this function is to extract the matrix of data points from .txt file
// each point includes x, y, z 
#include<iostream>
#include<fstream>  //for ifstream
#include<sstream>  //for istringstream 
#include<vector>   //for vector
#include<string> 
 
using namespace std;
 
int main()
{
//extract the matrix 'num'
	ifstream f;
	f.open("data1.txt");  //read file to f
 
	string str;
	vector<vector<float> > num;  //set num to be a two-dimensional array
	                             
	while(getline(f, str))  // read a row elements from f and give them to str
	{
		istringstream input(str); //creat and initialize istringstream 'input' which is connected with str
		vector<float> tmp;  //set tmp to be a array
		float a;
		while(input >> a)  // give an element from input to a
			tmp.push_back(a); //add a to the end of the array of tmp
		num.push_back(tmp);  //add tmp to the end of row of num
	}
//display 'num' (deletable)
	for(int i=0; i<num.size(); ++i)
	{
		for(int j=0; j<num[i].size(); ++j)
		{
			cout << num[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}