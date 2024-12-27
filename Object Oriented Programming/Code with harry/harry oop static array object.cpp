#include <iostream>
#define ll long long
using namespace std;

class player{
private:
	
//static data member
	static int count;	//count is a static data member of class player, if i don't make count static, then it will be same (the initialized value) for each player; try not using count as static
	int score;
	int id;
public:
	void setdata(int id, int score);
	void getdata();

//static function
	//why do we use it?
	//we can only access static data member in this function
	//we don't need to create any object to call it

	static void get_count(){
		count++;
		cout << "Count : " << count << endl;
	}
};

int player :: count;  //by default 0; so count = 0

void player :: setdata(int id,int score){
	this->score = score;
	this->id = id;
}

void player :: getdata(){
	cout << "Serial of the player : " << count << endl;
	cout << "Score : " << score << " and id: " << id << endl;
	cout << endl;
}


//complex number
class complex{
	int a, b;
public:
	void setdata(int x, int y){
		a = x;
		b = y;
	}

	void setdata(complex& o1, complex& o2){
		a = o1.a + o2.a;
		b = o1.b + o2.b;
	}

	void getdata(){
		cout << a << " +" << b << 'i' << endl;	//i = iota
 	}
};

int main(){
    player tamim, sakib, musfiq;

    player :: get_count();
    tamim.setdata(32, 96);
    tamim.getdata();

    player :: get_count();
    sakib.setdata(21, 99);
    sakib.getdata();

    player :: get_count();
    musfiq.setdata(31, 90);
    musfiq.getdata();


    //or i could make an array of object!
    player player_list[2];
    player_list[0].setdata(40, 91);
    player_list[1].setdata(41, 93);
    for(int i = 0; i < 2; i++){
    	player :: get_count();
    	player_list[i].getdata();
    }



//complex number
    complex o1, o2, o3;
    o1.setdata(2, 4);
    o1.getdata();

    o2.setdata(5, 8);
    o2.getdata();

    o3.setdata(o1, o2);
    o3.getdata();
}