int Square(int n)
    {
        int sum=0;
      while(n>0)
      {
        int rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
      }
      return sum;
    }
    
bool isHappy(int n) {
     
    if(n==1)
    {
        return true;
    }

    if(n==4)
    {
        return false;
    }

    return isHappy(Square(n));

   
    }
 
