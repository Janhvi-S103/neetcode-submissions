class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0; i < s.length(); i++)
        {
            char ch= s.at(i);
            switch(ch)
            {   
                case 'I':
                if(i < s.length()-1)
                {
                    if(s[i+1]=='V')
                    {
                        sum=sum+4;
                        i++;
                    }
                    else if(s[i+1] == 'X')
                    {
                        sum+=9;
                        i++;
                    }
                    else
                        sum+=1;
                    
                }
                else
                    sum+=1;
                break;

                case 'V':
                        sum+=5;
                break;

                case 'X':
                   if(i < s.length()-1)
                {
                    if(s[i+1]=='L')
                    {
                        sum=sum+40;
                        i++;
                    }
                    else if(s[i+1] == 'C')
                    {
                        sum+=90;
                        i++;
                    }
                    else
                        sum+=10;
                    
                }
                else
                    sum+=10; 
                break;
                case 'L':
                    sum+=50;
                    break;

                case 'C':
                if(i < s.length()-1)
                {
                    if(s[i+1]=='D')
                    {
                        sum=sum+400;
                        i++;
                    }
                    else if(s[i+1] == 'M')
                    {
                        sum+=900;
                        i++;
                    }
                    else
                        sum+=100;
                    
                }
                else
                    sum+=100;
                break;

                case 'D':
                    sum+= 500;
                break;

                case 'M':
                    sum+= 1000;
                break;

            }

        }
        return sum;
    }
};