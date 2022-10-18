public static int[] searchRange_bs(int[] nums, int target) {
        int[] ans = {-1, -1};

        if (nums == null || nums.length <= 0) {
            return ans;
        }

        ans[0] = binarySearchLeft(nums, target);
        ans[1] = binarySearchRight(nums, target);

        return ans;
    }

    public static int binarySearchLeft(int[] arr, int target) {
        if (arr[arr.length - 1] < target) {
            return -1;
        }

        int left = 0;
        int right = arr.length - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return arr[left] == target ? left : -1;
    }

    public static int binarySearchRight(int[] arr, int target) {
        if (arr[0] > target) {
            return -1;
        }

        int left = 0;
        int right = arr.length - 1;
        while (left < right) {
            int mid = left + (right - left + 1) / 2;
            if (arr[mid] > target) {
                right = mid - 1;
            } else {
                left = mid;
            }
        }

        return arr[left] == target ? left : -1;
    }
