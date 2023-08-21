bool checkArmstrong(int n){
	//Write your code here
	int count = 0, sum = 0, num = n;
	int temp = n;
	while(n != 0){
		int digit = n % 10;
		count++;
		n /= 10;
	}
	while(num != 0){
		int digit = num % 10;
		sum += pow(digit,count);
		num /= 10;
	}
	if(temp == sum){
		return true;
	}else{
		return false;
	}
}
