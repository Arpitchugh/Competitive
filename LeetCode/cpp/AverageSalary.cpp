class Solution {
public:
    double average(vector<int>& salary) {
        // Brute
        double sum = 0;
        int n = salary.size();
        sort( salary.begin(), salary.end() );

        for(int i=1;i<n-1;i++){
            sum += salary.at(i);
        }
        int a = salary.size() - 2; 

        return sum/a;
    }
};
