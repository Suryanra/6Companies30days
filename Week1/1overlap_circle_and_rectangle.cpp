class Solution {
public:

long long dist(int x1,int y1,int x2,int y2){
    long t1=abs(x1-x2); 
    long t2=abs(y1-y2);
    return sqrt(t1 * t1 +t2 * t2);
}
bool solve(int r, int xCenter, int yCenter, int x1, int y1, int x2, int y2){
    // if center inside the square
    if(xCenter >= x1 && xCenter <=x2 && yCenter>=y1 && yCenter<=y2) return true;
    for(int y=y1;y<=y2;y++){
        if(dist(xCenter,yCenter,x1,y) <=r) return true;
    }
    for(int y=y1;y<=y2;y++){
        if(dist(xCenter,yCenter,x2,y) <=r) return true;
    }
    for(int x=x1;x<=x2;x++){
        if(dist(xCenter,yCenter,x,y1) <=r) return true;
    }

    for(int x=x1;x<=x2;x++){
        if(dist(xCenter,yCenter,x,y2) <=r) return true;
    }
    return false;
}


bool solve2(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2){
    int Xn=max(x1,min(x2,xCenter));
    int Yn=max(y1,min(y2,yCenter));
    cout<<Xn<<" "<<Yn<<endl;
    if(sqrt(Xn*Xn+ Yn*Yn) <=radius ) return true;
    return false;
}
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
    //  return solve(radius,xCenter,yCenter,x1,y1,x2,y2);
     return solve2(radius,xCenter,yCenter,x1,y1,x2,y2);

    }
};