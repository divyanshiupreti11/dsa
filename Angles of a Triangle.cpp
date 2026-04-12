class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(),sides.end());
        double a=sides[0],b=sides[1],c=sides[2];
        if(a+b<=c) return {};
        double A=acos((b*b+c*c-a*a)/(2*b*c))*180.0/M_PI;
        double B=acos((c*c+a*a-b*b)/(2*a*c))*180.0/M_PI;
        double C=acos((a*a+b*b-c*c)/(2*b*a))*180.0/M_PI;
        vector<double> ans={A,B,C};
        sort(ans.begin(),ans.end());
        return ans;
    }
};
