#include<map>
#include<sstream>
#include<iostream>
#include<fstream>


using namespace std;
void wordsCount(string str)
{
    int count=1;
    std::map<string,int>wordsMap;
    istringstream wordStream(str);
    string word;

     while(wordStream>>word)
     {
         pair<map<string,int>::iterator,bool>returnValue;

         returnValue=wordsMap.insert(pair<string,int>(word,count));
         if(returnValue.second==false)
         {
             ++returnValue.first->second;
         }
     }
     map<string,int>::iterator itr;
     for(itr=wordsMap.begin();itr!=wordsMap.end();++itr)
     {
         cout<<'\t'<<itr->first;
         cout<<'\t'<<itr->second<<'\n';
     }
}
int main()

{


wordsCount("Welcome To HashCodes HashCodes Thanks for Accept my request");


    return 0;
}
