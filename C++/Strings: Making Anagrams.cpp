nt makeAnagram(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0;
    int j = 0;
    int ans = 0;
    while (i < a.size() || j < b.size()) {
        if (i >= a.size()) {
            j++;
            ans++;
        } else if (j >= b.size()) {
            i++;
            ans++;
            
        }else if (i >= a.size()) {
            i++;
            ans++;
        } else if (a[i] == b[j]) {
            i++;
            j++;
        } else if (a[i] < b[j]) {
            ans++;
            i++;
        } else if (b[j] < a[i]) {
            ans++;
            j++;
        }
    }

    return ans;
}
