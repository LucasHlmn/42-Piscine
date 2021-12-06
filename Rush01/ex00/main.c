/* 
    sample:
    char argv[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
*/

// solver from here
#include <unistd.h>

static unsigned int answer = 0;

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int checkBoard(int board[4][4], int *base)
{
    int k;

    k = 0;
    while (base[k] != '\0')
    {
        if (k / 4 == 0)
        {
            if (base[k] == 2)
            {
                if (board[0][k % 4] == 4)
                    return (0);
                if (board[2][k % 4] == 4)
                    if (board[1][k % 4] == 3)
                        return (0);
            }
            else if (base[k] == 3)
            {
                if (board[0][k % 4] == 3 || board[0][k % 4] == 4)
                    return (0);
                if (board[1][k % 4] == 4)
                    return (0);
                if (board[2][k % 4] == 4)
                    if (board[1][k % 4] == 1)
                        return (0);
                if (board[3][k % 4] == 4)
                    if (board[2][k % 4] == 3 && board[1][k % 4] == 2)
                        return (0);
            }
        }
        else if (k / 4 == 1)
        {
            if (base[k] == 2)
            {
                if (board[k % 4][3] == 4)
                    return (0);
                if (board[k % 4][1] == 4)
                    if (board[k % 4][2] == 3)
                        return (0);
            }
            else if (base[k] == 3)
            {
                if (board[k % 4][3] == 3 || board[k % 4][3] == 4)
                    return (0);
                if (board[k % 4][2] == 4)
                    return (0);
                if (board[k % 4][1] == 4)
                    if (board[k % 4][2] == 1)
                        return (0);
                if (board[k % 4][0] == 4)
                    if (board[k % 4][1] == 3 && board[k % 4][2] == 2)
                        return (0);
            }
        }
        else if (k / 4 == 2)
        {
            if (base[k] == 2)
            {
                if (board[k % 4][0] == 4)
                    return (0);
                if (board[k % 4][1] == 4)
                    if (board[k % 4][2] == 3)
                        return (0);
            }
            else if (base[k] == 3)
            {
                if (board[k % 4][0] == 3 || board[k % 4][0] == 4)
                    return (0);
                if (board[k % 4][1] == 4)
                    return (0);
                if (board[k % 4][2] == 4)
                    if (board[k % 4][1] == 1)
                        return (0);
                if (board[k % 4][3] == 4)
                    if (board[k % 4][2] == 3 && board[k % 4][1] == 2)
                        return (0);
            }
        }
        else if (k / 4 == 3)
        {
            if (base[k] == 2)
            {
                if (board[3][k % 4] == 4)
                    return (0);
                if (board[1][k % 4] == 4)
                    if (board[2][k % 4] == 3)
                        return (0);
            }
            else if (base[k] == 3)
            {
                if (board[3][k % 4] == 3 || board[3][k % 4] == 4)
                    return (0);
                if (board[2][k % 4] == 4)
                    return (0);
                if (board[1][k % 4] == 4)
                    if (board[2][k % 4] == 1)
                        return (0);
                if (board[0][k % 4] == 4)
                    if (board[1][k % 4] == 3 && board[2][k % 4] == 2)
                        return (0);
            }
        }
        k++;
    }
    return (1);
}

void showBoard(int board[4][4])
{
    int i;
    int j;

    j = 0;
    while (j < 4)
    {
        i = 0;
        while (i < 4)
        {
            ft_putchar(board[j][i] + '0');
            ft_putchar(' ');
            i++;
        }
        ft_putchar('\n');
        j++;
    }    
    ft_putchar('\n');
}

int checkNumber(int i, int j, int number, int board[4][4], int *base)
{
    int x;
    int y;

    x = 0;
    while (x < 4)
    {
        if (board[j][x] == number)
            return (0);
        x++;
    }
    y = 0;
    while (y < 4)
    {
        if (board[y][i] == number)
            return (0);
        y++;
    }
    return (1);
}

void putNumber(int i, int j, int number, int board[4][4], int *base)
{
    int fix_flag;

    fix_flag = 0;
    if (board[j][i] != number)
    {
        if (board[j][i] != 0)
            return ;
        if (!checkNumber(i, j, number, board, base))
            return ;
        board[j][i] = number;
    }
    else
    {
        fix_flag = 1;
    }
    if (i == 3 && j == 3)
    {
        if (checkBoard(board, base))
        {
            answer++;
            showBoard(board);
        }
    }
    else{
        int n;
        int next_i;
        int next_j;

        if (i + 1 >= 4)
        {
            next_i = 0;
            next_j = j + 1;
        }
        else
        {
            next_i = i + 1;
            next_j = j;
        }
        n = 1;
        while (n <= 4)
        {
            putNumber(next_i, next_j, n, board, base);
            n++;
        }
    }
    if (!fix_flag)
    {
        board[j][i] = 0;
    }
}

void solver(int board[4][4], int *base)
{
    int n;

    n = 1;
    while (n <= 4)
    {
        putNumber(0, 0, n, board, base);
        n++;
    }
}

// initializer from here
void initializer(int board[4][4], int *base)
{
    int i;
    int j;
    int k;
    int n;

    // initialize board
    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            board[i][j] = 0;
            j++;
        }
        i++;
    }

    // describe some constraints
    k = 0;
    while (base[k] != '\0')
    {
        // column up
        if (k / 4 == 0)
        {
            n = 0;
            if (base[k] == 1)
            {
                if (board[0][k % 4] == 0)
                    board[0][k % 4] = 4;
            }
            else if (base[k] == 4)
            {
                while (n < 4)
                {
                    if (board[n][k % 4] == 0)
                        board[n][k % 4] = n + 1;
                    n++;
                }
            }
        }
        else if (k / 4 == 1)
        {
            n = 4;
            if (base[k] == 1)
            {
                if (board[k % 4][3] == 0)
                    board[k % 4][3] = 4;
            }
            else if (base[k] == 4)
            {
                while (n > 0)
                {
                    if (board[k % 4][3] == 0)
                        board[k % 4][3] = 4 - n + 1;
                    n--;
                }
            }
        }
        else if (k / 4 == 2)
        {
            n = 0;
            if (base[k] == 1)
            {
                if (board[k % 4][0] == 0)
                    board[k % 4][0] = 4;
            }
            else if (base[k] == 4)
            {
                while (n < 4)
                {
                    if (board[k % 4][n] == 0)
                        board[k % 4][n] = n + 1;
                    n++;
                }
            }
        }
        else
        {
            n = 4;
            if (base[k] == 1)
            {
                if (!board[3][k % 4])
                    board[3][k % 4] = 4;
            }
            else if (base[k] == 4)
            {
                while (n > 0)
                {
                    if (!board[n - 1][k % 4])
                        board[n - 1][k % 4] = 4 - n + 1;
                    n--;
                }
            }
        }
        k++;
    }
}

// main.c from here
#include <unistd.h>

int is_error(void)
{
    write(1, "Error\n", 6);
    return (1);
}

int find_error(char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] >= '1' && argv[1][i] <= '4')
            j++;
        if (!(argv[1][i] >= '1' && argv[1][i] <= '4'))
            if (argv[1][i] != ' ')
                return (is_error());
        if (argv[1][i] == ' ')
            if (!(argv[1][i + 1] >= '1' && argv[1][i + 1] <= '4'))
                return (is_error());
        i++;
    }
    if (i != 31 || j != 16)
        return (is_error());
    return (0);
}

void str_to_ls(char **argv, int *base)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] >= '1' && argv[1][i] <= '4')
        {
            base[j] = argv[1][i] - '0';
            j++;
        }
        i++;
    }
    base[j] = '\0';
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int board[4][4];
    int base[17];

    if (argc != 2)
        return (is_error());
    if (find_error(argv))
        return (1);
    str_to_ls(argv, base);
    initializer(board, base);
    solver(board, base);
    if (!answer)
        return (is_error());
    return (0);
}
