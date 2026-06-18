class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minu = 6*minutes ;
        double hou = 30*(hour%12) + 0.5*minutes ;
        double diff = abs(hou-minu) ;
        return min(diff,360.0-diff) ;
    }
};