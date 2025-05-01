vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> rotatedArray(n);
    for (int i = 0; i < n; i++) {
        int index = (i - d + n)%n;
        rotatedArray[index]=arr[i];
    }
    return rotatedArray;
}
