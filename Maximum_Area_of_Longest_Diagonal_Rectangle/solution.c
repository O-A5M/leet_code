#include <math.h>

int areaOfMaxDiagonal(int** dimensions, int dimensionsSize
                            , int* dimensionsColSize)
{
    int     ret;
    double  diag;
    double  old_diag;

    ret = 0;
    diag = 0;
    old_diag = 0;
    for (int i = 0; i < dimensionsSize; i++)
    {
        diag = sqrt((dimensions[i][0] * dimensions[i][0])+(dimensions[i][1] * dimensions[i][1]));
        if (diag > old_diag)
        {
            old_diag = diag;
            ret = (dimensions[i][0] * dimensions[i][1]);
        }
        else if (diag == old_diag)
        {
            if ((dimensions[i][0] * dimensions[i][1]) > ret)
                ret = (dimensions[i][0] * dimensions[i][1]);
        }
    }
    return (ret);
}
