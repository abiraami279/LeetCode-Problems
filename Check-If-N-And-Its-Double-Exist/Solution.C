bool checkIfExist(int* arr, int arrSize) {
    for(int i=0;i<=arrSize-1;i++)
    {
        for(int j=0;j<=arrSize-1;j++)
        {
            if((i!=j)&&(arr[i]==2*arr[j]))
            {
                return true;
                break;
            }
        }
        
    }
    return false;
}
