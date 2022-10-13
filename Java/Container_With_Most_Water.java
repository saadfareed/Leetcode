public class Container_With_Most_Water {
    int maximumArea = Integer.MIN_VALUE;
    int left = 0;
    int right = height.length - 1;
    while (left < right) {
        int shorterLine = Math.min(height[left], height[right]);
        maximumArea = Math.max(maximumArea, shorterLine * (right - left));
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maximumArea;   
}
