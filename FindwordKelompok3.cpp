//1717051070 - Azhari
//2017051009 - Nesa Dwi Cahyani
//2017051032 - Mesak Tanati
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int cols = 16, rows = 15;
 char words[rows][cols] = {"tgbwwinterwsesn",
                        	"aaunttmmhfoodnb",
                            "jlwcqldzmpmvdmr",
                            "asagmquwvvbsohi",
                            "bwplotanadtpgnc",
                            "rewngodjcpnatnk",
                            "eeotwosbqharrsa",
                            "azcgeswewnaknpb",
                            "dinnerqodlwdcar",
                            "onopkwmparktzcc",
                            "qbfrogmamwpweey",
                            "lqzqnnmrzjjsclg",
                            "mosgzczetdbooto",
                            "pdcrzmsngrdnrpz",
                            "ohnkzwaterjgtra"};

char *getWordVertical(int );
char *reverse(char *);
bool searchVertical(char input[]){
	char *check;
	char kata[15];
	
	for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            kata[j] = words[j][i];
        }
        
        check = strstr(kata, input);

        if(check != NULL){
	        return true;
	    }
    }
    
    return false;
}
bool searchHorizontal(char input[]){
	char *check;
	
  for (int i = 0; i < 15; i++)
    {
        check = strstr(words[i], input);
        
	    if(check != NULL){
	        return true;
	    }
    }
    
    return false;
}

bool searchReverseVertical(char input[]){ //Nyari Secari Vertikal
	char *check;
	char kata[15];
	
	for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            kata[j] = words[j][i];
        }
        
        reverse(kata, kata + strlen(kata)); //huruf di balik menggunakan reverse
        check = strstr(kata, input);

        if(check != NULL){
	        return true;
	    }
    }
    
    return false;
}

bool searchReverseHorizontal(char input[]){ //Nyari Secara Horizontal
	char *check;
	char kata[15]; //Menyimpan Huruf Acak
	
	for (int i = 0; i < 15; i++)
    {
    	for(int j = 0; j < 15; j++){
	    	kata[j] = words[i][j];
		}
		
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
