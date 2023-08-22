#include <bits/stdc++.h> 
int findCase(char ch) {
    // Write your code here.
    if(ch >= 65 && ch <= 90){
        return 1;
    }else if(ch >= 97 && ch <= 122){
        return 0;
    }else{
        return -1;
    }
}