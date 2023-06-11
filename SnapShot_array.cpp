class SnapshotArray {
public:
    int snapI;
    vector<vector<pair<int, int>>> historyRecords;
    SnapshotArray(int length) {
        snapI = 0;
        historyRecords.resize(length);
        for (int i = 0; i < length; ++i) {
            historyRecords[i].push_back(make_pair(0, 0));
        }
    }
    
    void set(int index, int val) {
        historyRecords[index].push_back(make_pair(snapI, val));
    }
    
    int snap() {
        return snapI++;
    }
    
    int get(int index, int snap_id) {
        auto it = upper_bound(historyRecords[index].begin(), historyRecords[index].end(), make_pair(snap_id, INT_MAX));
        return prev(it)->second;
    }
};
