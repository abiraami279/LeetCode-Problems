// The API isBadVersion is defined for you.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int start=1;
    int end=n;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        bool result=isBadVersion(mid);
        if(result)
            end=mid-1;
        else if(!result)
            start=mid+1;
    }
    return start;
}
