class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int k,l;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(board[i][j]=='R')
                {
                    k=i;
                    l=j;
                }
            }
        }
        int pawn_attacked=0;
        for(int j=l+1;j<8;j++)
        {
            if(board[k][j]=='B')
            {
                break;
            }
            else if(board[k][j]=='p')
            {
                pawn_attacked++;
                break;
            }
        }
        for(int j=l-1;j>=0;j--)
        {
            if(board[k][j]=='B')
            {
                break;
            }
            else if(board[k][j]=='p')
            {
                pawn_attacked++;
                break;
            }
        }
        for(int i=k+1;i<8;i++)
        {
            if(board[i][l]=='B')
            {
                break;
            }
            else if(board[i][l]=='p')
            {
                pawn_attacked++;
                break;
            }
        }
        for(int i=k-1;i>=0;i--)
        {
            if(board[i][l]=='B')
            {
                break;
            }
            else if(board[i][l]=='p')
            {
                pawn_attacked++;
                break;
            }
        }
      return pawn_attacked;
    }
};