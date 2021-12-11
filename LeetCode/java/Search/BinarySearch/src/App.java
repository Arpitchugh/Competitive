// import java.lang.annotation.Target;

// import javax.lang.model.util.ElementScanner14;

public class App {
    public static void main(String[] args) {
        int[] array = { -18, -12, -4, 0, 2, 3, 4, 15, 16, 18, 22, 45, 89 };
        int target = -12;
        if (array.length == 0) {
            System.out.println("No element in string");
        }
        int result = binarySearch(array, target);
        System.out.println(result);

    }

    static int binarySearch(int[] arr, int num) {

        if (arr.length == 1) {
            int ans = arr[0];
            return ans;
        } else {
            int start = 0, end = (arr.length - 1);
            while (start <= end) {
                int mid = (start + end) / 2;
                if (arr[mid] > num) {
                    end = mid - 1;
                } else if (arr[mid] < num) {
                    start = mid + 1;
                } else {
                    return mid;
                }
            }
            return -1;
        }

    }

}