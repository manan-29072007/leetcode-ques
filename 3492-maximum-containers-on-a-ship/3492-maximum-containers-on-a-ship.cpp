class Solution {
public:
    int maxContainers(int n, int w, int maxweight) {
        int z=maxweight/w;
        int count=min(n*n,z);
        return count;
    }
};