class Solution 
{
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) 
    {
        //R and Q same row, B in between
        if(a == e && c == a && b < d && d < f) return 2;        
        if(a == e && c == a && b > d && d > f) return 2;
        //R and Q same column, B in between        
        if(b == f && d == b && a < c && c < e) return 2;        
        if(b == f && d == b && a > c && c > e) return 2;
        //Q lies on diag of bishop but R blocking
        if(c+d == e+f && a+b == c+d && e < a && a < c)  return 2;
        if(c+d == e+f && a+b == c+d && e > a && a > c)  return 2;
        if(c-d == e-f && a-b == c-f && c < a && a < e)  return 2;
        if(c-d == e-f && a-b == c-f && c > a && a > e)  return 2;
        //Q lies on diag of bishop
        if(c+d == e+f)  return 1;   
        if(c-d == e-f)  return 1;
        //R on Q without B
        if(a == e)    return 1;
        if(b == f)    return 1;
        return 2;
    }
};