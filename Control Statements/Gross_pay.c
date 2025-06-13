/* Write a program to calculate Gross pay and Net pay based on the following condition.
If Basic Pay is > =15000 then HRA is 20% of Basic Pay                                            
 Dearness Pay = 30% of Basic Pay.
 Dearness Allowance = 23.88% of (Basic Pay + Dearness Pay).
 CCA = 700, MA = 500, GPF = 25% 0f (Basic Pay + Dearness Pay).
 FBF = 18.38% of (Basic Pay + Dearness Pay), IT = 1000.
If Basic Pay is < 15000 then HRA is 15% of Basic Pay                                                
 Dearness Pay = 20% of Basic Pay.
 Dearness Allowance = 18.33% of (Basic Pay + Dearness Pay).
 CCA = 500, MA = 300, GPF = 20% 0f (Basic Pay + Dearness Pay).
 FBF =5 12.22% of (Basic Pay + Dearness Pay), IT = 700.
 Gross Pay = Basic Pay + Dearness Pay + Dearness Allowance + HRA + CCA + MA.
 Deductions = GPF + FBF + IT.
 Net Pay = Gross Pay – Deductions. */
#include <stdio.h>

int main()
{
    int basic_pay;
    float hra, dearness_pay, dearness_allowance, cca, ma, gpf, fbf, it, gross_pay, deductions, net_pay;
    printf("Enter the Basic Pay : ");
    scanf("%d", &basic_pay);
    if(basic_pay < 15000)
    {
        hra = (15.0 / 100) * basic_pay;
        dearness_pay = (20.0 / 100) * basic_pay;
        dearness_allowance = (18.33 / 100) * (basic_pay + dearness_pay);
        cca = 500;
        ma = 300;
        gpf = (20.0 / 100) * (basic_pay + dearness_pay);
        fbf = (12.22 / 100) * (basic_pay + dearness_pay);
        it = 700;
    }
    else
    {
        hra = (20.0 / 100) * basic_pay;
        dearness_pay = (30.0 / 100) * basic_pay;
        dearness_allowance = (23.88 / 100) * (basic_pay + dearness_pay);
        cca = 700;
        ma = 500;
        gpf = (25.0 / 100) * (basic_pay + dearness_pay);
        fbf = (18.38 / 100) * (basic_pay + dearness_pay);
        it = 1000;
    }
    gross_pay = basic_pay + dearness_pay + dearness_allowance + hra + cca + ma;
    deductions = gpf + fbf + it;
    net_pay = gross_pay - deductions;
    printf("The Gross pay is %.2f and the Net pay is %.2f",  gross_pay, net_pay);
}