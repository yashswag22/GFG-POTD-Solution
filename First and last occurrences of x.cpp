 int low = 0;
        int high = n-1;
        
         int ans1 = INT_MAX;
         int ans2 = INT_MIN;
         
        vector<int>v;
        while(low <= high)
        {  
            int mid =(low+high)/2;
            
            if(arr[mid]<x)
            {
                low = mid+1;
            }
            else if(arr[mid]>x)
            {
                high = mid-1;
            }
            else if(arr[mid]==x)
            {
                ans1 = min(ans1,mid);
                high= mid-1;
            }
            
        }
        if (ans1!= INT_MAX)
        v.push_back(ans1);
        else
            v.push_back(-1);
           
        
    
        low =0;
        high = n-1;
        while(low<=high)
        {
            int mid = (low + high)/2;
            
            if(arr[mid]<x)
            {
                low = mid+1;
            }
            else if(arr[mid]>x)
            {
                high = mid-1;
            }
            else if(arr[mid]==x)
            {
                ans2 = max(ans2,mid);
                low = mid+1;
            }
        }
        
        if(ans2!=INT_MIN)
        v.push_back(ans2);
        else
        v.push_back(-1);
        
        
        
        return v;
