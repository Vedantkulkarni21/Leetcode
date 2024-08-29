class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>sta1;
        vector<int>ans;
        for(int it:asteroids)
        { 
            if(it > 0)
            {
                sta1.push(it);
            }
            else{
                if(sta1.empty())
                {
                    sta1.push(it);
                }
                else
                {
                    while(!sta1.empty())
                    {
                        if(sta1.top() < 0)
                        {
                            sta1.push(it);
                            break;
                        }
                        else if(sta1.top() == abs(it))
                        {
                            sta1.pop();
                            break;
                        }
                        else if(sta1.top() < abs(it))
                        {
                            sta1.pop();
                            if(sta1.empty())
                            {
                                sta1.push(it);
                                break;
                            }
                        }
                        else if(sta1.top() > abs(it))
                        {
                            break;
                        }        
                    }
                }
            }
        }

        while(!sta1.empty())
        {
            ans.push_back(sta1.top());
            sta1.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};













/*
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>sta1,sta2;
        vector<int>ans;
        for(int it:asteroids)
        { 
            if(it > 0)
            {
                sta1.push(it);
            }
            else{
                
            }
        }

        while(!sta1.empty() && !sta2.empty())
        {
            
            if(sta1.top() == abs(sta2.top()))
            {
                sta1.pop();
                sta2.pop();
            }
            else if(sta1.top() < abs(sta2.top()))
            {
                sta1.pop();
            }
            else if(sta1.top() > abs(sta2.top()))
            {
                sta2.pop();
            }        
        }

        while(!sta1.empty())
        {
            ans.push_back(sta1.top());
            sta1.pop();
        }
        while(!sta2.empty())
        {
            ans.push_back(sta2.top());
            sta2.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

*/