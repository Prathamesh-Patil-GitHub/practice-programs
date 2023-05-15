// https://leetcode.com/problems/frequency-tracker

class FrequencyTracker {
public:
    unordered_map<int, int> um;
    FrequencyTracker() {
        
    }
    
    void add(int number) {
        um[number]++;
    }
    
    void deleteOne(int number) {
        if(um[number]){
            um[number]--;
        }
    }
    
    bool hasFrequency(int frequency) {
        for(auto it: um){
            if(it.second == frequency){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */