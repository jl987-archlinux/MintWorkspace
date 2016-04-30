/*
 * In one organization they have n different committees. The organization has a
 * very large number of employees. Each employee is a member of each committee.
 *
 * Each committee has a quorum: the smallest number of members that have to be
 * present to have an official meeting. You are given a int[] arr with n
 * elements. Each element of arr is the quorum of one committee.
 *
 * You are also given an int k. Yesterday, k different committees had an
 * official meeting, all at the same time. Obviously, each person attended
 * at most one of those meetings. Compute and return the smallest possible
 * number of people who attended a meeting yesterday.
 *
 * Notes:
 * 1. The value of n is not given explicitly. Instead, you can determine it as
 * the number of element in arr.
 *
 * Constraints:
 * 1. arr will contain between 1 and 50 elements, inclusive.
 * 2. Each element of arr will be between 1 and 50.
 * 3. k will be between 1 and the number of elements of arr, inclusive.
 */
public class Quorum {
    /**
     * Select a random element and partition the array, such that all elements
     * that are less than the partitioning element come before all elements
     * that are greater than it. The partitioning can be performed
     * through a series of swaps.
     */
    private void quicksort(int[] arr) {
    }

    private int partition(int[] arr, int left, int right) {
        // select middle element of the array as the pivot element.
        int pivot = arr[(left + right) / 2];
        while (left <= right) {
            // Find the element on the left that should be on the right.
            while (arr[left] < pivot) left++;
            // Find the element on the right that should be on the left.
            while (arr[right] > pivot) right--;
            // swap elements, and move left and right indices.
            if (left <= right) {
                int tmp = arr[left];
                arr[left] = arr[right];
                arr[right] = tmp;
                left++;
                right--;
            }
        }
        return left;
    }
    public int count(int[] arr, int k) {
    }
    public static void main(String[] args) {
    }
}
