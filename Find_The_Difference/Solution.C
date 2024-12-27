char findTheDifference(char* s, char* t) {
    int str1_sum=0,str2_sum=0;
    int i,diff;
    for(i=0;s[i]!='\0';i++)
    {
        str1_sum+=(int)s[i];
    }
     for(i=0;t[i]!='\0';i++)
    {
        str2_sum+=(int)t[i];
    }
    diff=abs(str1_sum-str2_sum);
    return (char)diff;
    
}
