// https://leetcode.com/problems/frequency-tracker

class FrequencyTracker {
public:
    unordered_map<int, int> freqMap, countMap; 
    FrequencyTracker() {}
    
    void add(int number) {
        int oldFreq = freqMap[number];
        int newFreq = ++freqMap[number];
        countMap[oldFreq]--;
        countMap[newFreq]++;
    }
    
    void deleteOne(int number) {
        int oldFreq = freqMap[number];
        if (oldFreq > 0) {
            int newFreq = --freqMap[number];
            countMap[oldFreq]--;
            countMap[newFreq]++;
        }
    }
    
    bool hasFrequency(int frequency) {
        return countMap[frequency] > 0;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */