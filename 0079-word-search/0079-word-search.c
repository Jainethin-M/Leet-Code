bool dfsb(char **board, int mrow, int mcol, char *word, int crow, int ccol)
{
    //This mean we are done with search
    if ((word[0] == '\0'))
        return true;
    //out of bound check; here mean search end in this path
    if (crow < 0 || ccol <0 || crow >= mrow || ccol >= mcol)
        return false;
    // Not found ; search end    
    if (board[crow][ccol] != word[0])
    {
        return false;
    }
    // here mean board[crow][ccol] == word[0]
    // mark it
    board[crow][ccol] = ".";
    //now check adjucent cell
    //same row next col
    if (dfsb(board, mrow, mcol, word+1, crow, ccol+1 ))
        return true;
    //same row prev col
    if (dfsb(board, mrow, mcol, word+1, crow, ccol-1))
        return true;
    //down row same col
    if (dfsb(board, mrow, mcol, word+1, crow-1, ccol))
        return true;
    //up row same col
    if (dfsb(board, mrow, mcol, word+1, crow+1, ccol))
        return true;

    // Here mean we did not found any match so undo 
    board[crow][ccol] = word[0];
    return false;
}

bool exist(char** board, int num_rows, int* num_cols, char* word) 
{
    for (int row = 0; row < num_rows; ++row)
        for (int col = 0; col < *num_cols; ++col)
            if (dfsb(board, num_rows, *num_cols, word, row, col))
                return true;
                
    return false;
}