--> while sorting we always take the last element as sort as ,when comparing last before element(j) we also check last element (j+1) ,so loop can stop before last element

    by conditing if(arr[j]>arr[j+1])

--> And also at end of eat iteration of i loop the largest element moves the last

   eg:in first iteration 1st largest can be found at last index.
      in second iteration 2nd largest can be found at last before index.

-->becase of this after each iteration of i,its enought to check j for len-1-i.as for each iteration of i each element at ith position is sorted.
