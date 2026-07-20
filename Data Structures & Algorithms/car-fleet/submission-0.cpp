class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
          int n =  position.size() ;
          if ( n  == 0 )  return 0 ;  
        vector<pair<int,double>>  cars(n) ;  
        for(int i=0 ; i<n ;  i++ ){
          double time =  double(target - position[i]) /  speed[i] ;
          cars[i] = {position[i] , time } ; 

        }

        sort(cars.begin() , cars.end () ,  [](const pair<int, double >& a , const pair<int , double >& b ){
          return a.first >  b.first ;  
        });

        int fleets = 0 ;  
        double currmaxtime = 0 ;  

        for(int i=0 ;  i<n ;  i++){
          double time =  cars[i].second ;
          if(time >  currmaxtime ){
            fleets++ ; 
            currmaxtime =  time ;  
          }
        }
        return fleets ;  
    }
};
