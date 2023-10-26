 int count =0;
        int temp = n;
        
        while(temp>=2)
        {
            count++;
            count = count + (temp%2);
            temp = temp/2;
        }
        
        count += temp;
        return count;
