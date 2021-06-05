int countZero(int n)
    {
        int x = n;
        int count = 0;
        while(x){
            x = x&(x-1);
            count++;
        }

        int total=0;
        x = n;

        while(x){
            x = x>>1;
            total++;
        }

        return total - count;
    }
