class RecentCounter {
public:
    vector<int>vec;
    RecentCounter() {

    }
    
    int ping(int t) {
        vec.push_back(t);
        int lower_limit = t-3000;
        int count = 0;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i] <= t && vec[i] >= t-3000)
            {
                count++;
            }
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */