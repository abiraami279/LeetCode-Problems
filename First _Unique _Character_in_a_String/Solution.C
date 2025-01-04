int firstUniqChar(char* s) {
    
    for(int i=0;s[i]!='\0';i++)
    {
        int count=0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[i]==s[j] && i!=j )
            {
                count++;
                break;
                
            } 
                 
        }
         if(count==0)
            {
                return i;
            }
    }
    return -1;
}
