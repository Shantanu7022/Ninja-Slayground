string lookAndSaySequence(int n) 
{
    // Write your code here.
    if(n == 1){
        return "1";
    }
    if(n == 2){
        return "11";
    }

    string str = "11";
    for(int i = 3; i <= n; i++){
        str  += '$';
        int len = str.length();
        int count = 1;
        string temp = "";

        for(int j = 1; j < len; j++){
            if(str[j] != str[j-1]){
                temp += count + '0';
                temp += str[j-1];
                count = 1;
            }else{
                count++;
            }
        }
        str = temp;
    }
    return str;
}