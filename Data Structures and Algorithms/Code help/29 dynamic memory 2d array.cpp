#include <iostream>
using namespace std;

//didn't note in this code
//recommended to watch the video from 8:20 minute

int main(){
    int row, col;
    cin >> row >> col;

    //creating a 2d array
    int **arr = new int*[row];    //watch from 8:20 (video)
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //scaning input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    //printing output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    //relesing memory (heap always need to be freed manually)
    for(int i=0; i<row; i++){
        delete []arr[i];
    }

    delete []arr;

    return 0;
}