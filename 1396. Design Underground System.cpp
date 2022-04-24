class UndergroundSystem {
public:
    map<double,pair<string,double>> customer;
	//customer is storing customer id as key and stationname and time as value
    map<pair<string, string>, pair<double, double>> total;
	//total is storing startstation and endstation as key and totaltime and count as value
    UndergroundSystem() {
        customer.clear();
        total.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        customer[id]={stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        total[{customer[id].first, stationName}]={total[{customer[id].first, stationName}].first+(t-customer[id].second),total[{customer[id].first, stationName}].second+1};
    }
    
    double getAverageTime(string startStation, string endStation) {
        return total[{startStation,endStation}].first/total[{startStation,endStation}].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);

