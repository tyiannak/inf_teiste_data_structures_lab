#include <stdio.h>
#include <stdlib.h>
// Depression variables:
// 0: smoke: number of cigarettes smoked per day
// 1: bmi index
// target value: heart desease index: 0 (low risk) .. 3 (high risk)
struct DTnode{
    int varIndex;
    float varThres;
    int outValue1;
    int outValue2;
    struct DTnode *left;
    struct DTnode *right;
};
typedef struct DTnode DTnode;
int classify(DTnode *root, int *vals);

int main()
{
    int Vals[2];    
    printf("Give smoke:"); scanf("%d", &Vals[0]);
    printf("Give bmi:");   scanf("%d", &Vals[1]);    
    DTnode *n1 = (DTnode *)malloc(sizeof(DTnode));
    DTnode *n2 = (DTnode *)malloc(sizeof(DTnode));
    DTnode *n3 = (DTnode *)malloc(sizeof(DTnode));
    DTnode *n4 = (DTnode *)malloc(sizeof(DTnode));
    n1 -> varThres = 5;  n1->varIndex = 0; n1->left = n2;   n1->right = n3;
    n2 -> varThres = 28; n2->varIndex = 1; n2->left = NULL; n2->right = NULL; n2->outValue1 = 0; n2->outValue2 = 1; 
    n3 -> varThres = 28; n3->varIndex = 1; n3->left = NULL; n3->right = n4;   n3->outValue1 = 1; 
    n4 -> varThres = 15; n4->varIndex = 0; n4->left = NULL; n4->right = NULL; n4->outValue1 = 2; n4->outValue2 = 3; 
    int res = classify(n1, Vals); printf("Out : %d\n", res);
    return 0;
}

int classify(DTnode *root, int *vals)
{    
    int val = vals[root->varIndex];
    int thres = root->varThres;
    if (val<thres)
        if (root->left)
            classify(root->left, vals);
        else
            return root->outValue1;
    else
        if (root->right)
            classify(root->right, vals);
        else
            return root->outValue2;
}