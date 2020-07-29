// C++ program to find the shortest path between
// a given source cell to a destination cell.
#include <bits/stdc++.h>
using namespace std;
#define ROW 10
#define COL 10
string v;
int l=0;
vector<string>v1;
pair<int,int>p;

//To store matrix cell cordinates
struct Point
{
    int x;
    int y;
};

// A Data Structure for queue used in BFS
struct queueNode
{
    Point pt; // The cordinates of a cell
    int dist; // cell's distance of from the source
};

// check whether given cell (row, col) is a valid
// cell or not.
bool isValid(int row, int col)
{
    // return true if row number and column number
    // is in range
    return (row >= 0) && (row < ROW) &&
           (col >= 0) && (col < COL);
}

// These arrays are used to get row and column
// numbers of 4 neighbours of a given cell
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};

// function to find the shortest path between
// a given source cell to a destination cell.
int BFS(char mat[][COL], Point src, Point dest)
{
    // check source and destination cell
    // of the matrix have value 1
    if (!mat[src.x][src.y] || !mat[dest.x][dest.y])
        return -1;

    bool visited[ROW][COL];
    memset(visited, false, sizeof visited);

    // Mark the source cell as visited
    visited[src.x][src.y] = true;

    // Create a queue for BFS
    queue<queueNode> q;

    // Distance of source cell is 0
    queueNode s = {src, 0};
    q.push(s); // Enqueue source cell

    // Do a BFS starting from source cell
    while (!q.empty())
    {
        queueNode curr = q.front();
        Point pt = curr.pt;

        // If we have reached the destination cell,
        // we are done
        if (pt.x == dest.x && pt.y == dest.y)
            return curr.dist;

        // Otherwise dequeue the front cell in the queue
        // and enqueue its adjacent cells
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int row = pt.x + rowNum[i];
            int col = pt.y + colNum[i];

            // if adjacent cell is valid, has path and
            // not visited yet, enqueue it.
            char x=v[l];

            if (isValid(row, col) && mat[row][col] &&
                    !visited[row][col] && x==mat[row][col])
            {
                // mark cell as visited and enqueue it
                visited[row][col] = true;
                l++;
                //cout<<p.second<<" "<<col<<endl;
                if(p.first!=row)
                {
                    v1.push_back("forth");
                    p.first=row;
                    p.second=col;
                }
                else if(p.second!=col)
                {
                    if(p.second>col)
                    {
                        v1.push_back("left");
                    }
                    else
                    {
                        v1.push_back("right");
                    }
                    p.first=row;
                    p.second=col;
                }
                queueNode Adjcell = { {row, col},
                    curr.dist + 1
                };
                q.push(Adjcell);
            }
        }
    }

    // Return -1 if destination cannot be reached
    return -1;
}

// Driver program to test above function
int main()
{
    int a,row,col;
    cin>>a;
    while(a--)
    {
        char mat[ROW][COL];
        memset(mat,0,sizeof(mat));
        cin>>row>>col;
        v.clear();
        l=0;
        v="IEHOVA#";
        Point source;
        Point dest;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='@')
                {
                    source= {i,j};
                    p.first=i;
                    p.second=j;
                }
                if(mat[i][j]=='#')
                {
                    dest= {i,j};
                }
            }
        }
        //cout<<p.first<<" "<<p.second<<endl;
        int dist = BFS(mat, source, dest);

        if (dist != INT_MAX)
        {
            for(int i=0; i<v1.size(); i++)
            {
                cout<<v1[i];
                if(i!=v1.size()-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        v1.clear();
    }


    return 0;
}
