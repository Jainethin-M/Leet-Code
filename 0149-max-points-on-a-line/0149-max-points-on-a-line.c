#define max(a,b)(a>b?a:b)
int maxPoints(int** points, int pointsSize, int* pointsColSize){

    if(pointsSize == 1) return 1;
    int r = 2;
    
    for(int i = 0; i < pointsSize; ++i)
    {
        for(int j = i+1; j < pointsSize; ++j)
        {
            int cnt = 2;
            for(int k = 0; k < pointsSize; ++k)
            {
                if(k != i && k != j && 
                   (*(*(points+i) + 1) - *(*(points + j) + 1)) * (*(*(points + i)) - *(*(points + k))) 
                   == (*(*(points+i) + 1) - *(*(points + k) + 1)) * (*(*(points + i)) - *(*(points + j))))
                {
                    cnt++;
                }
            }
            r = max(r, cnt);
        }
    }
    return r;
    
}