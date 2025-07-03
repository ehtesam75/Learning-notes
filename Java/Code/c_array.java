import java.lang.reflect.Array;
import java.util.Arrays;

public class c_array {
    public static void main(String[] args){
        // In Java, arrays are objects, reference type
        int[] numbers = new int[5];
        numbers[0] = 1;
        numbers[1] = 2;
        numbers[2] = 3;

        System.out.println(numbers); //it prints the reference of the array object, not the elements
        System.out.println(Arrays.toString(numbers));   //[1, 2, 3, 0, 0]
        //two zeros caz all items are initialized to 0 by default
        //this converts the array to a string representation

        int[] array = {1, 2, 3, 100, 5};
        Arrays.sort(array);
        System.out.println(Arrays.toString(array));


//        2d array

        int[][] matrix = new int[2][3]; //2 rows, 3 columns
        matrix[0][0] = 2;
        System.out.println(Arrays.deepToString(matrix));
        //deepToString is used for multidimentaional arrays, it converts the array to a string representation

        int[][] matrix2 = {
                {1, 2, 3},
                {4, 5, 6}
        };

        System.out.println(Arrays.deepToString(matrix2));
    }
}
