class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<=8; i++)
        {
            set<char> s;
            for(int j=0; j<=8;j++)
            if(board[i][j]!='.')
            {
                if(s.count(board[i][j]))
                {                
                    return false;
                }
                s.insert(board[i][j]);
            }

        }
        for(int i=0;i<=8;i++)
        {
            set<char> s1;
            for (int j=0;j<=8;j++)
            if(board[j][i]!='.')
            {
                if(s1.count(board[j][i]))
                {
                    return false;
                }
                s1.insert(board[j][i]);

            }

        }
       

        //box 
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                set<char> s3;
                for(int r=0; r<3;r++)
                {
                    for(int c=0; c<3;c++)
                    if(board[r+i*3][c+j*3]!='.')
                    {
                        if(s3.count(board[r+i*3][c+j*3]))
                        {
                            return false;
                        }
                        s3.insert(board[r+i*3][c+j*3]);
                    }
                }
            }
        }
        return true;

        
    }
};
