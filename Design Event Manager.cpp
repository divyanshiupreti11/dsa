class EventManager {
public:
    struct Compare{
         bool operator()(const pair<int,int>& a,const pair<int,int>& b) const{
             if(a.first!=b.first){
                 return a.first > b.first;
             }
             return a.second < b.second;
         }
    };
    unordered_map<int,int> idToPriority;
    set<pair<int,int> ,Compare> eventSet;
    EventManager(vector<vector<int>>& events) {
        for(auto& event:events){
            int id=event[0];
            int p=event[1];
            idToPriority[id]=p;
            eventSet.insert({p,id});
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        int oldPriority=idToPriority[eventId];
        eventSet.erase({oldPriority,eventId});
        idToPriority[eventId]=newPriority;
        eventSet.insert({newPriority,eventId});
    }
    
    int pollHighest() {
        if(eventSet.empty()) return -1;
        auto it =eventSet.begin();
        int highestId=it->second;
        eventSet.erase(it);
        idToPriority.erase(highestId);
        return highestId;
    }
};
