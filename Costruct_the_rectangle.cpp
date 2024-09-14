class Solution {
public:
    vector<int> constructRectangle(int area) {
        int min_parameter = INT_MAX;
        int l, b;
        vector<int> v;
        for(int i=1; i<=area; i++){
            if(area%i==0){
                l = i;
                b = area/i;
                if(l<b){
                    continue;
                }
                if(min_parameter>(l-b)){
                    min_parameter = (l-b);
                    v.push_back(l);
                    v.push_back(b);
                }
            }
        }
        return v;
    }
};
