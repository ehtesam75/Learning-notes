/*

subset
	the number of even-sized subsets is equal to the number of odd-sized subsets.
	all subset of {0, 5, 5}?
	{}, {0}, {5}, {0, 5}, {5, 5}, {0, 5, 5}
	note : subsets are collections where duplicate values don't create additional subsets at the same level.
	so here Subsets with 1 element: {0}, {5} //not 3 subset

subarray xor
	when it comes to subarray xor, in 99% case, its easier to work with prefix xor

formula
	2^0 + 2^1 + 2^2 +....+2^n = 2^(n+1) - 1;


formula: how many pairs?
	all pair when 1 <= i < j <= n (n = array size)
	number of pair = (n * (n -1)) /2
	say n (n=5) number of element present in an array, number of pair when i < j is : 
	number of ways to choose r element from n elment, nCr => 5C2 => (5 * 4) / 2 => n * (n-1) / 2;

	all pair when 1 <= i > j <= n 
	number of pair = (n * (n -1)) /2  ;**same as above one**

	all pair when 1 <= i, j <= n 
	number of pair = n * n
	consider a nested for loop and for each i, there are 'n' number of j that i can pair with
	so n * n

	all pair when 1 <= i <= j <= n 
	number of pairs = (n * (n+1)) / 2;
	1st elment can pair with n element, 2nd element can do this with n-1, 3rd with n-2...

	all pair when 1 <= i != j <= n 
	number of pairs = n * (n-1);
	every element (total n elment) can pair with n-1 element of the array
	thus n * (n-1)



//space com
	const unsigned int MAX_VAL = (1u << 31);
		//unsigned; cuz 2^31 is out of int range (int max 2^31-1, but for unsigned int its : 2^32-1)
	bool exits[MAX_VAL];  //1 byte per element   //MAX_VAL bytes ///this will cost 2048 MB memory
	*use this* bitset<MAX_VAL> exists; //1 bit per element //(MAX_VAL/8) bytes //this will cost 256MB //MC : O(MAX_VAL / (8 * 10^6)) Mb (mega bit)
	vector<bool> exists(MAX_VAL, false)	//1 bit per element //will cost ~260MB //surpursing its becasue its more optimized than a ragular bool array
	https://www.codechef.com/problems/CHEFQUE


//try use assert func for debugging purpose
	assert(a == 3)
	assert func will do nothing if the condition is true
	if not, then assert function will give a runtime error
	thus we can check what's causing error in the program