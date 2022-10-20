#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;
#include <time.h>
static int counter = 0;
static int counter1 = 0;

void prwo(string s) {
    string word;
    int i = 0;
    string ss;
    while (i < s.length() - 1) {
        while (i!= s.length() &&s[i] != ' ' && s[i] != ',') {
            counter1++;
            counter1++;
            counter1++;
            word.push_back(s[i]);
            i++;
        }
        ss = s;
            ss.erase(i - word.length(), word.length());
      
        if (ss.find(word)!= 4294967295) {
            cout << word;
        }
        counter1++;
        i++;
        word = "";
    }
}
