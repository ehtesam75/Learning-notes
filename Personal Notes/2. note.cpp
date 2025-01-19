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



//related to space complexity
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


//vector rotate
	vector<int> v{1, 2, 3, 4, 5};
    rotate(v.begin(), v.begin() +2, v.begin() + 4);
    // rotate(first, middle, last);
    // first: An iterator to the beginning of the range to rotate.
    // middle: An iterator pointing to the element that should become the new first element.
    // last: An iterator to the end of the range to rotate.

    // Elements between [first, middle) are moved to the end of the range.
    // Elements between [middle, last) are moved to the beginning.
    for(auto x : v) {
        cout << x << ' ';
    } cout << endl;


//xor of 0 to n
	using this we can calculate xor to 0 to n in O(1)
	int xor_0_to_n(int n){
	    if(n % 4 == 0) return n;
	    else if(n % 4 == 1) return 1;
	    else if(n % 4 == 2) return n + 1;
	    else return 0;
	}


//divisor : prime factorization
	Prime Factorization is the process of breaking down a positive integer into a product of prime numbers
	For any integer n>1, there exists a unique prime factorization: 
	n = a^p1 * b^p2 * c^p3
	i. e n = 84
	84 can be represented as = 2^3 * 3^1 * 7^1 (84/2 => 42/2 => 21/3(next prime num after 2) =>7 (already a prime! so will stop))

	say x = 7^2 * 13^3 + 19^1
			{7^0, 7^1, 7^2}, {13^0, 13^1, 13^2, 13^3}, {19^0, 19^1}
			we can take any number of number from each of this three set 
			and then x will be always divided by their multiplicaton 
	
	total number of divisor of x is : (2+1) * (3+1) * (1+1);	//look at the above set, u'll understand..its just counting
	cuz we know if a a number's prime factorization is = a^x * b ^ y
	then no. of divisor is = (x +1) * (y+1)
