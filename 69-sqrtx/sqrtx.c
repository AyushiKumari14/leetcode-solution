int mySqrt(int x) {
    if (x < 2)
        return x;

    long long left = 1, right = x / 2;
    int ans = 1;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        if (mid * mid == x)
            return (int)mid;

        if (mid * mid < x) {
            ans = (int)mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}
