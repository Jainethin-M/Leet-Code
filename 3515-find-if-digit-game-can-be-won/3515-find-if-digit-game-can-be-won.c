bool canAliceWin(int* n, int ns) {
    int h=0,v=0;
    for(int i=0;i<ns;i++)
    {
        if(n[i]<=9)
        h+=n[i];
        else
        v+=n[i];
    }
    if(h==v)
    return false;
    else return true;
}