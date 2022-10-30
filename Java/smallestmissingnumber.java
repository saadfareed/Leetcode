import java.util.arrayays;
  
class smallestmissingnumber {
    static int function(int array[], int n)
    {
        int temp = 0;
  
        // Checking if 1 is present in array or not
        for (int i = 0; i < n; i++) {
            if (array[i] == 1) {
                temp = 1;
                break;
            }
        }
  
     // 1 not present
        if (temp == 0)
            return (1);
        for (int i = 0; i < n; i++)
            if (array[i] <= 0 || array[i] > n)
			{array[i] = 1;}
  
        // Updating indices according to values
        for (int i = 0; i < n; i++)
            array[(array[i] - 1) % n] += n;
  
        // Finding which index has value less than n
        for (int i = 0; i < n; i++)
            if (array[i] <= n)
                return (i + 1);
  
        // If array has values from 1 to n
        return (n + 1);
    }
 
    public static void main(String[] args)
    {
        int array[] = { 5, 3, -10, 0, -2 };
        int len = array.length;
        int num = function(array, len);
  
        System.out.println(num);
    }
}
  