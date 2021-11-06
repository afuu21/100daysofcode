int c(-1), cnt(0);               // c = candidate, cnt = counter
        
        for(auto n: nums)
        {
            if (cnt == 0)
                c = n;
            cnt += (n == c) ? 1 : -1;
        }
        
        return c;
