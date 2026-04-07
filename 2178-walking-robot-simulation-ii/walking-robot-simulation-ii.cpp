class Robot {
public:
int dir=0;
int n,m,peri;
int x=0,y=0;
vector<string> dirs={"East","North","West","South"};
vector<pair<int,int>> move={{1,0},{0,1},{-1,0},{0,-1}};
    Robot(int width, int height) {
        n=width;
        m=height;
        peri=2*(n+m-2);
    }
    
    void step(int num) {
        if(peri==0)
        {
            return;
        }
        num%=peri;
        if(num==0 && x==0 && y==0)
        {
            dir=3;
        }
        while(num--)
        {
            int fx=x+move[dir].first;
            int fy=y+move[dir].second;
            if(fx<0 || fx>=n || fy<0 || fy>=m)
            {
                dir=(dir+1)%4;
                num++;
                continue;
            }
            x=fx;
            y=fy;
        }
    }
    
    vector<int> getPos() {
        return {x,y};
    }
    
    string getDir() {
        return dirs[dir];
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */