/*

prime factorization
	every number can be written as product of some prime number and there's only way of writing this


number of divisor count of a number
	is always even unless the number (i.e 100) can be written as sqare of a number (i.e : 100 can be written as 10^2)


difference array
	basic problem : (we will have to add x to all element in range of l to r)
	we will first get the diff array then will do d[l] += x and d[r+1] -= x
	why? 
	note we will later do prefix sum to convert diff array to main array. 
	so adding x to d[l] means we will add x to all the element after l as prefix sum is sum of previous element in array
	but substracting x (d[r+1] -= x;) make sure that adding x effect will end in 'r+1'th index
	cuz for every element after d[r] prefix sum will see +x -x ; which means no effect of x; will reamin same
	so we succesfully added x to range l to r!


	modarate problem : Statement: We have n lists numbered from 1 to n. Initially, all lists are empty. We have q queries of the form l, r, x. For each query, we
	have to append x to all lists from l to r inclusive. After all queries, print the number of unique elements in each list.


	**
	const int N = 2e5 + 7;
	vector<int> add[N], rmv[N];

	int n; cin >> n;
    int q; cin >> q;
    while(q--){
        int l, r, x; cin >> l >> r >> x;
        add[l].push_back(x);
        rmv[r+1].push_back(x);
    }

    vector<int> prefix;
    for(int i = 1; i <= n; i++){
        for(auto x : add[i]) {
            prefix.push_back(x);
        }

        for(auto x : rmv[i]) {
            prefix.erase(find(prefix.begin(), prefix.end(), x));
        }

        for(auto x : prefix) {
            cout << x << ' ';
        } cout << endl;
    }
    //time complexity : O(n^2)

    **
    this is how we can print all the number in the list
    but we will have to find the number of uniqe element in each list/vector

    **
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        for(auto x : add[i]) {
            mp[x]++;
        }

        for(auto x : rmv[i]) {
            mp[x]--;
            if(mp[x] == 0){
                mp.erase(x);
            }
        }

        cout << mp.size() << endl;
    }
    //time com : O(nlogn)
    **
    we will change the later part of the code like this. this will give the desired output
*/


	